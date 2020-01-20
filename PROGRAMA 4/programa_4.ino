int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int pin8 = 8;
int pin9 = 9;
int pin10 = 10;
int pin11 = 11;
int pin12 = 12;



void setup(){
 
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
  pinMode(pin10,OUTPUT);
  pinMode(pin11,OUTPUT);
  pinMode(pin12,OUTPUT);
}

void loop() {
   digitalWrite(pin12, HIGH);
  
   digitalWrite(pin5, HIGH); 
   delay(500);

   digitalWrite(pin6,HIGH);
   digitalWrite(pin11,HIGH);
   delay(500);
   
   digitalWrite(pin12,LOW);
   digitalWrite(pin5,LOW);
   digitalWrite(pin7,HIGH);
   digitalWrite(pin10,HIGH);
   delay(500);

  digitalWrite(pin11,LOW);
  digitalWrite(pin6,LOW);
  digitalWrite(pin8,HIGH);
  digitalWrite(pin9,HIGH);
  delay(500);

  digitalWrite(pin7,LOW);
  digitalWrite(pin10,LOW);
  delay(500);
  
  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  delay(1000);

  digitalWrite(pin8,HIGH);
  digitalWrite(pin9,HIGH);
  delay(500);

  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin7,HIGH);
  digitalWrite(pin10,HIGH);
  delay(500);

  digitalWrite(pin8,LOW);
  digitalWrite(pin9,LOW);
  digitalWrite(pin6,HIGH);
  digitalWrite(pin11,HIGH);
  delay(500);

 

   digitalWrite(pin7,LOW);
  digitalWrite(pin10,LOW);
  digitalWrite(pin5,HIGH);
  digitalWrite(pin12,HIGH);
  delay(500);

 
  
digitalWrite(pin6,LOW);
digitalWrite(pin11,LOW);
delay(500);

digitalWrite(pin5,LOW);
digitalWrite(pin12,LOW);
  delay(1000);

   digitalWrite(pin5,HIGH);
   digitalWrite(pin12,HIGH);
   delay(500);

   digitalWrite(pin6,HIGH);
   digitalWrite(pin11,HIGH);
   delay(500);


  

   digitalWrite(pin5,LOW);
   digitalWrite(pin12,LOW);
   digitalWrite(pin7,HIGH);
   digitalWrite(pin10,HIGH);
   delay(500);

   digitalWrite(pin6,LOW);
   digitalWrite(pin11,LOW);
   digitalWrite(pin8,HIGH);
   digitalWrite(pin9,HIGH);
   delay(500);

   digitalWrite(pin7,LOW);
   digitalWrite(pin8,LOW);
   digitalWrite(pin9,LOW);
   digitalWrite(pin10,LOW);

   delay(1000);
  

   

    
   
   
   
  

  
   

   
   

  
   
   
}
