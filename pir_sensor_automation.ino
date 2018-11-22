int x,y;
void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(3,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

x=analogRead(A0);
Serial.println(x);
if(x>200){
  digitalWrite(3,HIGH);
}else{
  digitalWrite(3,LOW);
}
}
