/**********************************************************************************
**                                                                               **
**                                Fade LEDs                                      **
**                                                                               **
**   NOM: Carles Bosch                                    DATA: 08 / 05 / 2017   **
**********************************************************************************/
//********** INCLUDE **************************************************************

//********** VARIABLES ************************************************************
const int led0 = 3;          // donar nom al pin 3 de l’Arduino
const int led1 = 5;          // donar nom al pin 5 de l’Arduino
const int led2 = 6;          // donar nom al pin 6 de l’Arduino
const int led3 = 9;          // donar nom al pin 9 de l’Arduino
const int led4 = 10;         // donar nom al pin 10 de l’Arduino
const int led5 = 11;         // donar nom al pin 11 de l’Arduino

int brightness = 0;          // brillantor del LED
int fadeAmount = 5;          // Augment brillantor

//********** SETUP ****************************************************************
void setup() {               // S'executa un sol cop
  pinMode(led0, OUTPUT);     // definir el pin 3 com una sortida
  pinMode(led1, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led2, OUTPUT);     // definir el pin 6 com una sortida
  pinMode(led3, OUTPUT);     // definir el pin 9 com una sortida
  pinMode(led4, OUTPUT);     // definir el pin 10 com una sortida
  pinMode(led5, OUTPUT);     // definir el pin 11 com una sortida
}

//********** LOOP *****************************************************************
void loop() {                // S'executa repetidament 
  analogWrite(led0, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);
  
  analogWrite(led1, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);
  
  analogWrite(led2, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);
  
  analogWrite(led3, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);
  
  analogWrite(led4, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);
  
  analogWrite(led5, brightness);
  brightness = brightness + fadeAmount;
  if (brightness <= 0 || brightness >= 255) {
  fadeAmount = -fadeAmount;
  }
  delay(30);

}

//********** FUNCIONS *************************************************************
