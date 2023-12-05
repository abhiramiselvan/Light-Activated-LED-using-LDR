const ledPin = 13;
const ldrPin = A0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  lightvalue = analogRead (ldrPin);
  int threshold = 500;
  if (lightvalue < threshold){
    digitalWrite(ledPin, HIGH);

  }
  
  else{
    digitalWrite(ledPin, LOW);
  }
  Serial.println(lightValue);  
  delay(1000); 

}
