//Evelyn Pitts
//Christina Sivaprakasam
//Tom Gallagher-Teske

void setup() {
pinMode(2, OUTPUT); // sets the digital pin 2 as output
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, INPUT);
}
void loop() {
int button = digitalRead(9);
if(button == HIGH){
digitalWrite(2, HIGH); // sets the digital pin 2 on
delay(1000); // waits for a second
digitalWrite(2, LOW); // sets the digital pin 2 off
delay(1000); // waits for a second
digitalWrite(7, HIGH); // sets the digital pin 7 on
delay(1000); // waits for a second
digitalWrite(7, LOW); // sets the digital pin 7 off
delay(1000); // waits for a second
digitalWrite(8, HIGH); // sets the digital pin 8 on
delay(1000); // waits for a second
digitalWrite(8, LOW); // sets the digital pin 8 off
delay(1000); // waits for a second
} else {
digitalWrite(2,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
}
}
