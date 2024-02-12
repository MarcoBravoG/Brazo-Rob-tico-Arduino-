//PROGRAMA PARA MOVIMIENTO DE ARTICULACIONES CON JOYSTICK
 
 
 #include <Servo.h>              // Incluir la librería Servo
     Servo servo1;                   // Servo de base pin 3
     Servo servo2;                   //Servo de hombro  pin 6
     Servo servo3;                   //Servo de codo pin 10
     Servo servo4;                  //servo de pinza pin 11
     int angulo1 = 110 ;               // Empezamos en el centro base
     int angulo2 = 90 ;                // Empezamos en el centro hombro
     int angulo3 = 90 ;               // Empezamos en el centro codo
     int angulo4 = 110 ;             // Empezamos en 50 grados pinza
     int salto = 3 ;                 // Controla el salto por movimiento
     int Eje_X = A1 ;                // pot de base
     int Eje_Y = A2 ;                //pot de hombro
     int Eje_Z = A4 ;                //pot de codo
     int Eje_H = A5 ;                //pot de pinza
    
     void setup()
        {
           servo1.attach(3) ;  // Conectar servo1 al pin 3
           servo2.attach(6) ;  // Conectar servo1 al pin 6
           servo3.attach(10) ;  // Conectar servo1 al pin 10
           servo4.attach(11) ;   // Conectar servo1 al pin 11
          
         }

     void loop()
        {
            int p = analogRead(A1);  // Base
            if ( p < 200 )                    // Si la lectura es menor de 200
                 angulo1 = angulo1 - salto ;    // disminuimos el angulo
            else if (p>800)                   // Si mayor de 800
                 angulo1 = angulo1 + salto ;    // Aumentamos el angulo
                 angulo1 = constrain(angulo1,30,180);  //Limita la distancia
            servo1.write(angulo1);             // Y este es el que mueve el servo
                                   
        
        
         
            int s = analogRead(A2); // Hombro
            if ( s < 200 )                    // Si la lectura es menor de 200
                 angulo2 = angulo2 - salto ;    // disminuimos el angulo
            else if (s>800)                   // Si mayor de 800
                 angulo2 = angulo2 + salto ;    // Aumentamos el angulo
                angulo2 = constrain(angulo2,30,160); //Limita la distancia
            servo2.write(angulo2);             // Y este es el que mueve el servo


             int f = analogRead(A4); // Codo
            if ( f < 200 )                    // Si la lectura es menor de 200
                 angulo3 = angulo3 - salto ;    // disminuimos el angulo
            else if (f>800)                   // Si mayor de 800
                 angulo3 = angulo3 + salto ;    // Aumentamos el angulo
                 angulo3 = constrain(angulo3,60,180); //Limita la distancia
            servo3.write(angulo3);             // Y este es el que mueve el servo


         int r = analogRead(A5); // Pinza
            if ( r < 200 )                    // Si la lectura es menor de 200
                 angulo4 = angulo4 - salto ;    // disminuimos el angulo
            else if (r>800)                   // Si mayor de 800
                 angulo4 = angulo4 + salto ;    // Aumentamos el angulo
                 angulo4 = constrain(angulo4,110,155); //Limita la distancia
            servo4.write(angulo4);             // Y este es el que mueve el servo
delay(25);   // ajuste tiempo de movimientos
                                
                                              
                }
        
        
      
