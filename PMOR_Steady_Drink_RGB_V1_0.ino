int LEDBlue = 7;
int LEDGreen = 9;
int LEDRed = 8;

void Blue(){
    digitalWrite(LEDRed, LOW);
    analogWrite(LEDGreen, LOW);
    digitalWrite(LEDBlue, HIGH);
}

void Green(){
    digitalWrite(LEDRed, LOW);
    digitalWrite(LEDBlue, LOW);
    analogWrite(LEDGreen, 100);  
}

void Orange(){      
    digitalWrite(LEDBlue, LOW);
    analogWrite(LEDGreen, 15); 
    digitalWrite(LEDRed, HIGH);
}

void Red(){
    analogWrite(LEDGreen, LOW);
    digitalWrite(LEDBlue, LOW);
    digitalWrite(LEDRed, HIGH);
}

void setup() {
  Green();
  delay(100);
  Orange();
  delay(100);
  Red();
  delay(5000);
}

void loop() {
  Green();
  delay(100);
  Orange();
  delay(100);
  Red();
  delay(100);
}
