var express = require('express');
var router = express.Router();
var Borad = require('../models/Borad');
// Index
router.get('/', function(req, res){
  Borad.find({}, function(err, borads){
    if(err) return res.json(err);
    res.render('borads/index', {borads:borads});
  });
});
// New
router.get('/new', function(req, res){
  res.render('borads/new');
});
// create
router.post('/', function(req, res){
  Borad.create(req.body, function(err, borad){
    if(err) return res.json(err);
    res.redirect('/borads');
  });
});
// show
router.get('/:id', function(req, res){
      Borad.findOne({_id:req.params.id}, function(err, borad){
        if(err) return res.json(err);
        res.render('borads/show', {borad:borad});
      });
    });
    // edit
    router.get('/:id/edit', function(req, res){
      Borad.findOne({_id:req.params.id}, function(err, borad){
        if(err) return res.json(err);
        res.render('borads/edit', {borad:borad});
      });
    });
    // update
    router.put('/:id', function(req, res){
      Borad.findOneAndUpdate({_id:req.params.id}, req.body, function(err, borad){
        if(err) return res.json(err);
        res.redirect('/borads/'+req.params.id);
      });
    });
    // destroy
    router.delete('/:id', function(req, res){
      Borad.deleteOne({_id:req.params.id}, function(err){
        if(err) return res.json(err);
        res.redirect('/borads');
      });
    });
    module.exports = router;
    