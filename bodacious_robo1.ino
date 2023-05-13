// C++ code

char status;
float resultado;
char op;

void setup()
{
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
  
  Serial.begin(9600);
  
  Serial.println("[1] red");
  Serial.println("[2] green");
  Serial.println("[3] blue");
  Serial.println("[4] yellow");
  Serial.println("[5] orange");
  Serial.println("[6] white");
  

  
}

void loop()
{ 
  status = Serial.read();
  
  if(status == '1') {
    digitalWrite(13, HIGH);
    delay(5000);
  } else if(status == '2'){
    digitalWrite(12, HIGH);
    delay(1000);
  } else if(status == '3'){
  	digitalWrite(11, HIGH);
    delay(1000);
  } else if(status == '4'){
    digitalWrite(10, HIGH);
    delay(1000);
  } else if(status == '5') {
    digitalWrite(9, HIGH);
    delay(1000);
  }else if(status == '6') {
    digitalWrite(8, HIGH);
    delay(1000);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
  
  
  
  //digitalWrite(8, HIGH);
  //delay(90); // Wait for 1000 millisecond(s)
  //digitalWrite(8, LOW);
  //delay(90); // Wait for 1000 millisecond(s)
 
}