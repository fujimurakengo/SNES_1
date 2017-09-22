
#define DAT 6
#define DATA2   7
#define CLK  8

void setup(){  

  pinMode(DAT,INPUT);
  pinMode(CLK,OUTPUT);
  pinMode(PS,OUTPUT);
   Serial.begin(9600);
}//20

void loop(){

    digitalWrite(DATA2,HIGH);
    digitalWrite(CLK,HIGH);
    digitalWrite(DATA2,LOW);
    digitalWrite(CLK,LOW);
    if(digitalRead(DAT) == LOW){
      Serial.println("press_b_bottom");                        
   }
}
