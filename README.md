# Light-Activated LED using LDR


## LDR:
- Made up of semiconductor material. Its works when the light falls on the LDR.
- Electrons and holders are increases the LDR resistance value decreases.
- When the LDR’s resistance value is increased then the current flow of circuit will decreases and then turn on the light.
- When the LDR’s resistance value is decreased then the current flow of circuit will increases and turn off the light.
- Here we will see the 2 type of basic circuit for connect the LDR with LED:

### Type - 1
- If we connect the resistance and LDR like the below then this is the working principle.
- Intensity of light is increased and turn on the light [Resistance will decreases and current is flow through the circuit].
- Intensity of light is decreased and turn off the light [Resistance will increase and current flow of circuit will reduce].
  
![circuit](https://github.com/abhiramiselvan/Light-Activated-LED-using-LDR/assets/144225835/de29d895-9edf-4d31-9359-5a3eb552d86c)


### Type - 2
- If we connect the resistance and LDR alternatively then the working principle.
- Intensity of light is increased and turn on the light [Resistance will decreases and current is flow through the circuit].
- Intensity of light is decreased and turn off the light [Resistance will increase and current flow of circuit will reduce].

![circuit (1)](https://github.com/abhiramiselvan/Light-Activated-LED-using-LDR/assets/144225835/a64dcb47-5e85-46af-918b-46bcfdb551f0)



## Arduino Code:

```base
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
```

### Working Model:
Now I have design the circuit to work as the second type.
LED light will be on when the external light is off and LED light will be off when the external light is on.

https://github.com/abhiramiselvan/Light-Activated-LED-using-LDR/assets/144225835/6fac4993-1b60-4a06-8868-3bf783298331
