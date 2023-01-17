float duration1;//left distance
float duration2;//right distance
float duration3;//center distance
const int t1=12;//triggerleft
const int e1=2;//echo
const int t2=11;//triggerright
const int e2=3;//echo
const int t3=10;//triggercenter
const int e3=4;//echo
const int a=7;//left buzzer
const int b=8;//right buzzer
const int c=6;//center buzzer
void setup()
{
    Serial.begin(9600);
    pinMode(e1,INPUT);
    pinMode(t1,OUTPUT);
    pinMode(e2,INPUT);
    pinMode(t2,OUTPUT);
    pinMode(e3,INPUT);
    pinMode(t3,OUTPUT);
    pinMode(a,OUTPUT);
    pinMode(b,OUTPUT);
    pinMode(c,OUTPUT);
}
void loop() {
    int distance1=0;
    digitalWrite(t1,LOW);
    delayMicroseconds(2);
    digitalWrite(t1,HIGH);
    delayMicroseconds(10);
    digitalWrite(t1,LOW);
    duration1=pulseIn(e1,HIGH);
    distance1=duration1*0.034/2;
    Serial.println("distance left:");
    Serial.println(distance1);
    if(distance1<=50)
    {
        tone(a,1000);
        Serial.println("object on the left");
        delay(100);
        noTone(a);
        delay(100);
        tone(a,1000);
        delay(1000);
        noTone(a);
    }
    int distance2=0;
    digitalWrite(t2,LOW);
    delayMicroseconds(2);
    digitalWrite(t2,HIGH);
    delayMicroseconds(10);
    digitalWrite(t2,LOW);
    duration2=pulseIn(e2,HIGH);
    distance2=duration2*0.034/2;
    Serial.println("distance right:");
    Serial.println(distance2);
    if(distance2<=50)
    {
        tone(b,1000);
        Serial.println("object on the right");
        delay(100);
        noTone(b);
        delay(100);
        tone(b,1000);
        delay(1000);
        noTone(b);
    }
    int distance3=0;
    digitalWrite(t3,LOW);
    delayMicroseconds(2);
    digitalWrite(t3,HIGH);
    delayMicroseconds(10);
    digitalWrite(t3,LOW);
    duration3=pulseIn(e3,HIGH);
    distance3=duration3*0.034/2;
    Serial.println("distance center:");
    Serial.println(distance3);
    if(distance3<=50)
    {
        tone(c,1000);
        Serial.println("object on the center");
        delay(100);
        noTone(c);
        delay(100);
        tone(c,1000);
        delay(1000);
        noTone(c);
    }
}
