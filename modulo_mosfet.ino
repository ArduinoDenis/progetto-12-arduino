/*

Questo esempio mostra come controllare la velocità di un motore DC

*/

int turns = 0; 
int turnAmount = 1; 

unsigned long currentTime;

unsigned long loopTime;

 

void setup() {

   pinMode(9, OUTPUT);
   currentTime = millis();
   loopTime = currentTime;

}


void loop() {

   currentTime = millis();

   if(currentTime >= (loopTime + 20)){

       analogWrite(9, turns);

       turns = turns + turnAmount;


       if (turns == 0 || turns == 255) {

           turnAmount = -turnAmount ;

       }

       if (turns == 0) {

           delay(5000);

       }

       loopTime = currentTime; 
   }

}
