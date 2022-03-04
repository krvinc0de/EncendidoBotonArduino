int led = 11;
int boton = 10;
int funcion;

void setup() {
  // put your setup code here, to run once:
pinMode(led, OUTPUT);
pinMode(boton, INPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
if(funcion = digitalRead(boton)){
  digitalWrite(led, HIGH);
  }else{
    digitalWrite(led, LOW);
    }
}
