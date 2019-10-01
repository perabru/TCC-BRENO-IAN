#include <AFMotor.h>
 
AF_DCMotor motor1(1); //Seleciona o motor 1
AF_DCMotor motor4(4); //Seleciona o motor 1

#define SENSOR_P  7   // Sensor de parada
char posicaoatual = 'E';
int cont = 0;

void setup()
{
     Serial.begin(9600);    
     pinMode (SENSOR_P, INPUT);
}
 
void loop()
{

  if(Serial.available() > 0)
  {
     char data;

    data = Serial.read();
    Serial.println(data);
 if( data=='1' || data=='A'){


    switch(data){
         case 'A': 
                 if (posicaoatual == 'E'){
                          //atribui 1 a variavel cont
                          //cont++;
                        
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
          
                              //Atualizando a posição da base
                          posicaoatual='A';  
               
                        
              }
             else if(posicaoatual == 'B'){
                
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(BACKWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(BACKWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
                              posicaoatual='A';  
                
                }


                   else if(posicaoatual == 'C'){

                         
                        //  for(int i = 0; i<=2; i++){
                        
                               motor1.setSpeed(400); //Define a velocidade maxima
                               motor1.run(BACKWARD); //Gira o motor sentido horario
                               motor4.setSpeed(400); //Define a velocidade maxima
                               motor4.run(BACKWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
                              
//}
                              posicaoatual='A';  
                
                }
                break;
    }
 }else if(data == '2' || data=='B'){

switch(data){
  case 'B': 
                 if (posicaoatual == 'E'){
                          //atribui 1 a variavel cont
                          //cont++;
                        
                               motor1.setSpeed(400); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(400); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
          
                              //Atualizando a posição da base
                          posicaoatual='B';  
               
                        
              }
             else if(posicaoatual == 'A'){
                
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
                              posicaoatual='B';  
                
                }


                   else if(posicaoatual == 'C'){

                         
                        //  for(int i = 0; i<=2; i++){
                        
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(BACKWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(BACKWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);

                              posicaoatual='B';  
                
                }

               
       break;


 }

                  
       } else if(data == '3' || data=='C'){

        switch(data){

            case 'C': 
                if (posicaoatual == 'E'){
                          //atribui 1 a variavel cont
                          //cont++;
                        
                               motor1.setSpeed(600); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(600); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
          
                              //Atualizando a posição da base
                          posicaoatual='C';  
               
                        
              }
             else if(posicaoatual == 'A'){
                
                               motor1.setSpeed(400); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(400); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
                              posicaoatual='C';  
                
                }


                   else if(posicaoatual == 'B'){

                         
                        //  for(int i = 0; i<=2; i++){
                        
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);

                              posicaoatual='C';  
                
                }

                
                 break;
          
          }
        
        
        }  else if(data == '4' || data=='E'){

           switch(data){
              case 'E': 
                if (posicaoatual == 'A'){
                          //atribui 1 a variavel cont
                          //cont++;
                        
                               motor1.setSpeed(200); //Define a velocidade maxima
                               motor1.run(FORWARD); //Gira o motor sentido horario
                               motor4.setSpeed(200); //Define a velocidade maxima
                               motor4.run(FORWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
          
                              //Atualizando a posição da base
                          posicaoatual='E';  
               
                        
              }
             else if(posicaoatual == 'B'){
                
                               motor1.setSpeed(400); //Define a velocidade maxima
                               motor1.run(BACKWARD); //Gira o motor sentido horario
                               motor4.setSpeed(400); //Define a velocidade maxima
                               motor4.run(BACKWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);
                              posicaoatual='E';  
                
                }


                   else if(posicaoatual == 'C'){

                         
                        //  for(int i = 0; i<=2; i++){
                        
                               motor1.setSpeed(600); //Define a velocidade maxima
                               motor1.run(BACKWARD); //Gira o motor sentido horario
                               motor4.setSpeed(600); //Define a velocidade maxima
                               motor4.run(BACKWARD);
                              while (digitalRead(SENSOR_P)==0);
                              motor4.run(RELEASE);
                              motor1.run(RELEASE);

                              posicaoatual='E';  
                
                }

            
            
              break;
            
            }

          

          
          }

      

  }
}

