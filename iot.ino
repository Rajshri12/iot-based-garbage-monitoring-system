int trigPin = 9;

int echoPin = 10;

int led = 7;

int buzzer = 4;

void setup() {

Serial.begin(9600);

pinMode(led, OUTPUT);

pinMode(buzzer, OUTPUT);

pinMode(trigPin, OUTPUT);

pinMode(echoPin, INPUT);}

// put your setup code here, to run once:

void loop() {

long duration, distance;

digitalWrite(trigPin,HIGH);

delayMicroseconds(1000);

digitalWrite(trigPin, LOW);

duration=pulseIn(echoPin, HIGH);

distance =(duration/2)/29.1;

Serial.print(distance);

Serial.println("CM");

// delay(700);

if((distance<15 && distance>7))

{

digitalWrite(led, HIGH);

analogWrite(buzzer,1);

}

else if(distance<14)

{

digitalWrite(led, LOW);

tone(buzzer,2000,200);

}

}

