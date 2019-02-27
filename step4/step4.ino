#define BOTAO 2
#define LED 3

void setup() {
  pinMode(BOTAO,INPUT_PULLUP);
  pinMode(LED,OUTPUT);
}

void loop() {
  int sensor, led;
  sensor = analogRead(0);
  led = map(sensor,0,1023,0,255);
  
  if(!digitalRead(BOTAO)){
    analogWrite(LED,led);
  }else{
    analogWrite(LED,LOW);
  }

}
