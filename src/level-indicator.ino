// C++ code
//
#define setUp 2
#define set 3
#define setDown 1
#define reset 0

byte level = 0;
byte ledPins[10]={4,5,6,7,8,9,10,11,12,13};

void setup() {
  for (byte i = 0; i < 10; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(setUp, INPUT);
  pinMode(set, INPUT);
  pinMode(setDown, INPUT);
  pinMode(reset, INPUT);
}

void loop() {
  buttonControl();
  levelControl();
}

void buttonControl() {
  if (digitalRead(setDown) == HIGH) {
    while (digitalRead(setDown) == HIGH);
    if (level > 0)
      level--;
  }
  if (digitalRead(setUp) == LOW) {
    while (digitalRead(setUp) == LOW);
    if (level < 10)
      level++;
  }
  if (digitalRead(reset) == HIGH) {
    while (digitalRead(reset) == HIGH);
    if (level <= 10)
      level=0;
  }
  if (digitalRead(set) == LOW) {
    while (digitalRead(set) == LOW);
    if (level >=0 )
      level=10;
  }
}

void levelControl() {
  if (level > 0){
  for(byte i =0;i<level;i++)
    digitalWrite(ledPins[i],HIGH);
  }
  else{
     for(byte i =0;i<10;i++)
       digitalWrite(ledPins[i],LOW);
  }
  for(byte i =0;i<level;i++)
    digitalWrite(ledPins[i],LOW);
}
  


