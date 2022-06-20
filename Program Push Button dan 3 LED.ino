#define led1 13
#define led2 12
#define led3 11
#define push 7

int status = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(push, INPUT);
  digitalWrite(led1, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(push)==HIGH){
    status++;
    delay(100);
  }
  if(status==1){
    digitalWrite(led1, HIGH);
  }
  else if(status==2){
    digitalWrite(led2, HIGH);
  }
  else if(status==3){
    digitalWrite(led3, HIGH);
  }
  else if(status==4){
    status = 0;
  }
  else{
    digitalWrite(led1, LOW);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
  }
} 
