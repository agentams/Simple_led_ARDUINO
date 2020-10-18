int led_red = 0;
int led_yellow = 1;
int led_green = 2; 
int led_blue = 4; 
void setup ()
{
  pinMode (led_red, OUTPUT);
  pinMode (led_yellow, OUTPUT); 
  pinMode (led_green, OUTPUT); 
  pinMode (led_blue, OUTPUT);
}
void loop()
{ 
  digitalWrite (led_red, HIGH); 
  digitalWrite (led_yellow, LOW); 
  digitalWrite (led_green, LOW);
  digitalWrite (led_blue, LOW);
  delay (1000); 
  
  
  digitalWrite (led_red, LOW); 
  digitalWrite (led_yellow, HIGH);
  digitalWrite (led_green, HIGH);
  digitalWrite (led_blue, LOW);
  delay (1000); 
  
  
  digitalWrite (led_red, LOW); 
  digitalWrite (led_yellow, LOW);
  digitalWrite (led_green, LOW);
  digitalWrite (led_blue, HIGH);
  delay (1000);
}
