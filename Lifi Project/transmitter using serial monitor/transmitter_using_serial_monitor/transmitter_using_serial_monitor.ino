
char data;

void setup() 
{
  Serial.begin(9600);
  pinMode(3,OUTPUT);
  digitalWrite(3,LOW);
}
void loop()
{
if(Serial.available())
{
  data=Serial.read();
  Serial.print(data);
  
  if (data) {
    //Serial.println(data);
   if (data == '1')
  {
    digitalWrite(3,HIGH);
    delay(10);
    digitalWrite(3,LOW);
  }
  else if (data == '2')
  {
    digitalWrite(3,HIGH);
    delay(20);
    digitalWrite(3,LOW);
  }
  else if (data == '3')
  {
    digitalWrite(3,HIGH);
    delay(30);
    digitalWrite(3,LOW);
  }
  else if (data == '4')
  {
    digitalWrite(3,HIGH);
    delay(40);
    digitalWrite(3,LOW);
  }
  else if (data == '5')
  {
    digitalWrite(3,HIGH);
    delay(50);
    digitalWrite(3,LOW);
  }
  else if (data == '6')
  {
    digitalWrite(3,HIGH);
    delay(60);
    digitalWrite(3,LOW);
  }
  else if (data == '7')
  {
    digitalWrite(3,HIGH);
    delay(70);
    digitalWrite(3,LOW);
  }
  else if (data == '8')
  {
    digitalWrite(3,HIGH);
    delay(80);
    digitalWrite(3,LOW);
  }
  else if (data == '9')
  {
    digitalWrite(3,HIGH);
    delay(90);
    digitalWrite(3,LOW);
  }
  else if (data == '*')
  {
    digitalWrite(3,HIGH);
    delay(100);
    digitalWrite(3,LOW);
  }
  else if (data == '0')
  {
    digitalWrite(3,HIGH);
    delay(110);
    digitalWrite(3,LOW);
  }
  else if (data == '#')
  {
    digitalWrite(3,HIGH);
    delay(120);
    digitalWrite(3,LOW);
  }
  else;
  } 
}
}
