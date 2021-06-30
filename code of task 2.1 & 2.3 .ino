void setup()
{
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop()
{ //clockwise M1
  digitalWrite(4, HIGH);digitalWrite(5, LOW);
   digitalWrite(6, HIGH);digitalWrite(7, LOW);
  delay(3000);
  //anticlockwise M1
  digitalWrite(4, LOW);digitalWrite(5, HIGH);
    digitalWrite(6, LOW);digitalWrite(7, HIGH);
  delay(3000); 
  

}
 