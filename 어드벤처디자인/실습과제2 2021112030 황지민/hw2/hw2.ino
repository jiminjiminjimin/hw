int led1=6;
int led2=7;
  
void setup() {
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
Serial.begin(9600);
Serial.println("시리얼 통신 시작 2021112030 황지민");



}

void loop() {
if (Serial.available()){
  char a;
  a=Serial.read();
  if(a=='1'){
    digitalWrite(6,HIGH);
    digitalWrite(7,HIGH);
    Serial.println("LED ON");
    
  }
  if(a=='0'){
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    Serial.println("LED OFF");
  }
}

}
