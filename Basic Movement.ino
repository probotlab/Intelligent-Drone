int enA1 = 6;
int in11 = 4;
int in12 = 3;
int in13 = 2;
int in14 = 1;
int enB1 = 5;

int enA2 = 10;
int in21 = 12;
int in22 = 11;
int in23 = 8;
int in24 = 7;
int enB2 = 9;

void setup() {
  
  pinMode(enA1, OUTPUT);
  pinMode(in11, OUTPUT);
  pinMode(in12, OUTPUT);
  pinMode(in13, OUTPUT);
  pinMode(in14, OUTPUT);
  pinMode(enB1, OUTPUT);
  
  pinMode(enA2, OUTPUT);
  pinMode(in21, OUTPUT);
  pinMode(in22, OUTPUT);
  pinMode(in23, OUTPUT);
  pinMode(in24, OUTPUT);
  pinMode(enB2, OUTPUT);
}

void loop() {
     

  analogWrite(enA1, 205);
  digitalWrite(in11, LOW);
  digitalWrite(in12, HIGH);
  digitalWrite(in13, HIGH);
  digitalWrite(in14, LOW);
  analogWrite(enB1, 200);
  
  analogWrite(enA2, 185);
  digitalWrite(in21, HIGH);
  digitalWrite(in22, LOW);
  digitalWrite(in23, HIGH);
  digitalWrite(in24, LOW);
  analogWrite(enB2, 185);

  delay(600);

  digitalWrite(enA1, LOW);
  digitalWrite(in11, LOW);
  digitalWrite(in12, LOW);
  digitalWrite(in13, LOW);
  digitalWrite(in14, LOW);
  digitalWrite(enB1, LOW);
  
  digitalWrite(enA2, LOW);
  digitalWrite(in21, LOW);
  digitalWrite(in22, LOW);
  digitalWrite(in23, LOW);
  digitalWrite(in24, LOW);
  digitalWrite(enB2, LOW);

  delay(2000);
}
