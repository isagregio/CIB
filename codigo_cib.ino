#include <Servo.h>
Servo motor1;
Servo motor2;
int pos1 = 0; // Variável para armazenar a posição do motor 1
int pos2 = 0;
char data = Serial.read();
void setup() {
  motor1.attach(9, 600, 2300);
  motor2.attach(10, 600, 2300);
  // Inicializa o servo motor
  Serial.begin(9600);
}




void loop() {
  if(Serial.available() > 0)
  {
    char data = Serial.read();
    if (data == 'a') /*remedio 1 que nao gira o primeiro motor */
    {
      for (pos2 = 0; pos2 <= 180; pos2 += 1) {
        motor2.write(pos2);
        delay(15);
      }
      for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
        motor2.write(pos2);
        delay(15);
      }
    }


    if (data == 'b') /*remedio 2 que gira o primeiro 60 */
    {
     for (pos1 = 0; pos1 <= 60; pos1 += 1) {
      motor1.write(pos1);
      delay(15);
      if (pos1 == 60) {
      delay(2000);
      // Rotacionar o motor 2 em 180 graus
      for (pos2 = 0; pos2 <= 180; pos2 += 1) {
        motor2.write(pos2);
        delay(15);
      }
      for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
        motor2.write(pos2);
        delay(15);
      }
      }
    }
    for (pos1 = 60; pos1 >= 0; pos1 -= 1){
        motor1.write(pos1);
        delay(15);
    }
    delay(2000);

    }


     if (data == 'c')
    {
      for (pos1 = 0; pos1 <= 120; pos1 += 1) {
      motor1.write(pos1);
      delay(15);
      if (pos1 == 120) {
      delay(2000);
      // Rotacionar o motor 2 em 180 graus
      for (pos2 = 0; pos2 <= 180; pos2 += 1) {
        motor2.write(pos2);
        delay(15);
      }
      for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
        motor2.write(pos2);
        delay(15);
      }
      }
    }
    for (pos1 = 120; pos1 >= 0; pos1 -= 1){
        motor1.write(pos1);
        delay(15);
    }
    delay(2000);

    }
     if (data == 'd')
    {
      for (pos1 = 0; pos1 <= 180; pos1 += 1) {
      motor1.write(pos1);
      delay(15);
      if (pos1 == 180) {
      delay(2000);
      // Rotacionar o motor 2 em 180 graus
      for (pos2 = 0; pos2 <= 180; pos2 += 1) {
        motor2.write(pos2);
        delay(15);
      }
      for (pos2 = 180; pos2 >= 0; pos2 -= 1) {
        motor2.write(pos2);
        delay(15);
      }
      }
    }
    for (pos1 = 180; pos1 >= 0; pos1 -= 1){
        motor1.write(pos1);
        delay(15);
    }
    delay(2000);

    }

  }

}
 



