const int pwm = 10;

const int in_1 = 8; const int in_2 = 9;

void setup() { pinMode(pwm,OUTPUT);
              pinMode(in_1,OUTPUT);
              pinMode(in_2,OUTPUT); }

void loop() {


digitalWrite(in_1,HIGH); 
  digitalWrite(in_2,LOW);
    analogWrite(pwm,255);



}