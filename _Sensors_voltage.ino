
int voltage;
float outvoltage;


void setup(){
  Serial.begin(9600);
  pinMode(2,INPUT);
}


void loop() { 
  voltage = analogRead(0)+11;
  outvoltage = map(voltage, 0, 1023, -512, 512);
  outvoltage = outvoltage * 0.0098;
  voltage = outvoltage * 1000;
//  Serial.print(voltage);
//  Serial.print("  ");
//+


Serial.print('$');
Serial.print('v');
Serial.print(voltage);
Serial.println(';');
delay(500);

}
