const int pinoLDR = A0;
const int pinoLED = 7;
int leitura = 0;

void setup(){
  Serial.begin(9600);
  pinMode(pinoLDR, INPUT);
  pinMode(pinoLED, OUTPUT);

}

void loop(){
  leitura = analogRead(pinoLDR);
  Serial.println(leitura);
  
  if(leitura<920){
    digitalWrite(pinoLED, HIGH);
  }else{
    digitalWrite(pinoLED, LOW);
  }
}
