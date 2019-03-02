int LED = 3; //Se inicia una variable tipo entero con nombre "LED" y guarda el número 3
int PIR = 2; //Se inicia una variable tipo entero con nombre "PIR" y guarda el número 2
int valor=0; //Se inicia una variable tipo entero con nombre "valor" y guarda el número 0


void setup() {//Clase para establecer y configurar los pines que se utilizarán en el Arduino
//pinMode(Pin de Arduino, Modalidad)
  pinMode(LED, OUTPUT); //Comando que establece al pin 3 del Arduino como una señal de salida
  //Es igual que escribir pinMode(3, OUTPUT);
  pinMode(PIR, INPUT); //Comando que establece al pin 2 del Arduino como una señal de salida
  Serial.begin(9600); //Comando que inicia una comunicación serial entre el Arduino y la PC
}


void loop() {  //Clase donde se escriben las acciones y se repite infinitamente

  //digitalRead(Pin del Arduino): Comando para inidicar que realice una lectura digital de ese pin
  valor = digitalRead(PIR);//Se realiza una lectura digital en el pin PIR(2) y guarda la lectura
                           // en la variable con nombre "valor"
   //Condicional if 
   if(valor == HIGH){   //Si la variable "valor" recibe una señal digital ingresa
//digitalWrite(Pin del Arduino, Modalidad): Comando para envíar una señal digital a través del pin del Arduino
    digitalWrite(LED, HIGH); //Envía voltaje en el pin "LED"(3)
//Serial.println("Texto"): Comando que envía un texo o valor y es visualizado en el Monitor Serie     
    Serial.println("Detectó"); //Imprime el texo "Detectó" en el monitor serie 
   }
  //Condicional else 
  //Va justo después de una condicional if
   else{  //(Si no): Si no cumple lo anterior en el condicional if, ingresa en esta condicional
    digitalWrite(LED, LOW); //NO envía o quita el voltaje en el pin "LED"(3)
    Serial.println("  ");//Imprime el texo "   " en el monitor serie 
   }
}
