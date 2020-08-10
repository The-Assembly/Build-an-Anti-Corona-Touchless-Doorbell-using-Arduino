#define ir 8
#define relay 3

void setup(){
  pinMode(ir, INPUT);
  pinMode(relay,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  Serial.print(digitalRead(ir));
  delay(500);
  if(digitalRead(ir) == LOW){
    digitalWrite(relay,HIGH);
  }
  else{
    digitalWrite(relay,LOW);
  }
}
