//address the music note//

#define note_A 440
#define note_B 494
#define note_C 262
#define note_D 294
#define note_E 330
#define note_F 339
#define note_G 390
#define note_extra 550

const int buzzer = 6;

const int Button_one = A0;
const int Button_two = A1;
const int Button_three = A2;
const int Button_four = A3;
const int Button_five = A4;
const int Button_six = A5;
const int Button_seven = 2;
const int Button_eight = 3;


void setup()
{
  pinMode(10, OUTPUT);//FOR LED
  
  pinMode(6, OUTPUT);//PIN FOR BUZZER
  
  pinMode(Button_one, OUTPUT);
  pinMode(Button_two, OUTPUT);
  pinMode(Button_three, OUTPUT);
  pinMode(Button_four, OUTPUT);
  pinMode(Button_five, OUTPUT);
  pinMode(Button_six, OUTPUT);
  pinMode(Button_seven, OUTPUT);
  pinMode(Button_eight, OUTPUT);
}

void loop()
{
  if(digitalRead(Button_one) == 1)
  {
    tone(buzzer,note_C,100);
    digitalWrite(10, HIGH);
  }
  if(digitalRead(Button_two) == 1)
  {
    tone(buzzer,note_D,100);
    digitalWrite(10, LOW);
  }
  if(digitalRead(Button_three) == 1)
  {
    tone(buzzer,note_E,100);
    digitalWrite(10, HIGH);
  }
  if(digitalRead(Button_four) == 1)
  {
    tone(buzzer,note_F,100);
    digitalWrite(10, LOW);
  }
  if(digitalRead(Button_five) == 1)
  {
    tone(buzzer,note_G,100);
    digitalWrite(10, HIGH);
  }
  if(digitalRead(Button_six) == 1)
  {
    tone(buzzer,note_A,100);
    digitalWrite(10, LOW);
  }
  if(digitalRead(Button_seven) == 1)
  {
    tone(buzzer,note_B,100);
    digitalWrite(10, HIGH);
  }
  if(digitalRead(Button_eight) == 1)
  {
    tone(buzzer,note_extra,100);
    digitalWrite(10, LOW);
  }
  delay(20);
}
