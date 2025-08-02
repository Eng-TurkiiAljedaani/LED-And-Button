// C++ code
//
const int Button1 = 2;
const int Button2 = 3;
const int Button3 = 4;

const int LED1 = 8;
const int LED2 = 9;
const int LED3 = 10;

int Button1_State = 0;
int Button2_State = 0;
int Button3_State = 0;

void setup()
{
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  
  pinMode(Button1, INPUT);
  pinMode(Button2, INPUT);
  pinMode(Button3, INPUT);

}

void loop()
{
  Button1_State = digitalRead(Button1);
  Button2_State = digitalRead(Button2);
  Button3_State = digitalRead(Button3);
  
  if (Button1_State == HIGH){
    digitalWrite(LED1, HIGH);
  }
  else {
    digitalWrite(LED1, LOW);
  }
  
  if (Button2_State == HIGH){
    digitalWrite(LED2, HIGH);
  }
  else {
    digitalWrite(LED2, LOW);
  }
  
  if (Button3_State == HIGH){
    digitalWrite(LED3, HIGH);
  }
  else {
    digitalWrite(LED3, LOW);
  }
	
  
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
