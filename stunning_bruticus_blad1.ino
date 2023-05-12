// C++ code
// Feito no TinkerCad
// Sensor de estacionamento

int trig = 3;
int echo = 2;
float tempo;
float distancia;

void setup()
{
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  
}

void loop()
{
  digitalWrite(trig, HIGH); // faz o disparo
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  tempo = pulseIn(echo, HIGH);
  distancia = (tempo/58.2);
  Serial.print("distancia: ");
  Serial.println(distancia);
  
  if(distancia >= 200.00 && distancia <= 320.00) {
    	Serial.print("Longe");
    	digitalWrite(13, HIGH);
    	digitalWrite(12, HIGH);
    	tone(4, 10000);
  } else {
   	 digitalWrite(13, LOW);
    digitalWrite(12, LOW);
  }
  
    
   if(distancia >= 101.00 && distancia <= 199.00) {
    	Serial.print("medio");
    	digitalWrite(11, HIGH);
    	digitalWrite(10, HIGH);
         tone(4, 1000);
  } else {
   	 digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }
  
    if(distancia >= 0.00 && distancia <= 99.00) {
    	Serial.print("perto");
    	digitalWrite(9, HIGH);
    	digitalWrite(8, HIGH);
     	 tone(4, 10);
  } else {
   	 digitalWrite(9, LOW);
    digitalWrite(8, LOW);
  }
 
  
}
