int humidite=A0;
int relais=13;
int red_pin=6;
int blue_pin=10;
int green_pin=11;
int eclairage;
void setup() {
  Serial.begin(9600);
                         pinMode(relais,OUTPUT);
                         pinMode(red_pin,OUTPUT);
                         pinMode(green_pin,OUTPUT);
                         pinMode(blue_pin,OUTPUT);
}

void loop() {
int humidite=analogRead(humidite);
  Serial.println(humidite);
       if(humidite<600){  
        digitalWrite(relais,LOW);//ouvrir l'interrupteur
        digitalWrite(red_pin,LOW);
        digitalWrite(blue_pin,LOW);
        digitalWrite(green_pin,HIGH);
    }
       if(humidite<1000&&humidite>600){
        digitalWrite(relais,HIGH);//mettre en marche la pompe,envoyer 5V au pin 13,fermer l'interrupteur
        digitalWrite(red_pin,HIGH);
        digitalWrite(blue_pin,LOW);
        digitalWrite(green_pin,HIGH);
    }
      if(humidite>1000){    
       digitalWrite(relais,HIGH);//mettre en marche la pompe,envoyer 5V au pin 13,fermer l'interrupteur
       digitalWrite(red_pin,HIGH);
       digitalWrite(blue_pin,LOW);
       digitalWrite(green_pin,LOW);
    }
  delay(1000);

}
