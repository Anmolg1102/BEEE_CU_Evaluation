int button = 0;
int x =0;

void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, INPUT);
}

void loop()
{
  button = digitalRead(button);
  if(button == HIGH)
  {
   x=x+2;
  }
  if(x==2)
  {
  digitalWrite(4 , HIGH);
  delay(500);
  
  }  
  if(x==4)
  {
  digitalWrite(5 , HIGH);
  delay(500);
   
  }
  if(x==6)
  {
  digitalWrite(3 , HIGH);
  delay(500);
  
  }
  
}