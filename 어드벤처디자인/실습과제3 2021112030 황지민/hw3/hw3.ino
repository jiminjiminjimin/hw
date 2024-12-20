//2021112030 황지민

int tact_blue=13;
int tact_red=2;
int led[]={5,6,7,8,9,10,11};
int count=0;


void setup() {
  Serial.begin(9600);
  for(int i=0;i<7;i++){
    pinMode(led[i],OUTPUT);
  }
  pinMode(tact_blue,INPUT_PULLUP);
  pinMode(tact_red,INPUT_PULLUP);
  

}


void loop() {
if(count<0||count>6){
  int a =(count<0)?6:0;
  count = a;
  showLight(count);
}
if(digitalRead(tact_blue)==LOW){
  count ++;
  Serial.println(count);
  showLight(count);
}
else if(digitalRead(tact_red)==LOW){
  count --;
  Serial.println(count);
  showLight(count);
}
delay(250);

}

void showLight(int a){
  for(int i=0;i<7;i++){
    if (a==i) digitalWrite(led[i],HIGH);
    else digitalWrite(led[i],LOW);
    }
}
