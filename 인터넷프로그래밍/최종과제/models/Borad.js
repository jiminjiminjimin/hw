//models/Borad.js
var mongoose = require('mongoose');
var boradSchema = mongoose.Schema({
title:{type:String, required:true, unique:true},author:{type:String},content:{type:String}
});
var Borad = mongoose.model('borad', boradSchema);
module.exports = Borad;
