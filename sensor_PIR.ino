const int PIR = 2;   //Se inicia una variable tipo entero con nombre "PIR" y guarda el número 2
const int LED = 3;   //Se inicia una variable tipo entero con nombre "LED" y guarda el número 3
int pir_lectura = 0; //Se inicia una variable tipo entero con nombre "pir_lectura" y guarda el número 0

void setup() { //Clase para establecer y configurar los pines que se utilizarán en el Arduino
//pinMode(Pin de Arduino, Modalidad)
  // Configuración
  pinMode(LED, OUTPUT); // Configurar LED (pin 3) como salida o OUTPUT
  pinMode(PIR, INPUT);  // Configurar PIR (pin 2) como entrada o INPUT
  Serial.begin(9600); // Configurar el puerto serial a 9600 por si queremos monitoriar
}

void loop() { //Clase donde se escriben las acciones y se repite infinitamente
  // Código principal donde ocurren en loop

   //digitalRead(Pin del Arduino): Comando para inidicar que realice una lectura digital de ese pin
  pir_lectura = digitalRead(PIR); //Se realiza una lectura digital en el pin PIR(2) y guarda la lectura
                                  // en la variable con nombre "valor"
  // Encender LED si hay movimiento
  if (pir_lectura == HIGH) { //Si la variable "pir_lectura" recibe una señal digital ingresa
    
//digitalWrite(Pin del Arduino, Modalidad): Comando para envíar una señal digital a través del pin del Arduino
    digitalWrite(LED, HIGH);  //Envía voltaje en el pin "LED"(3), enciende el LED
//Serial.println("Texto"): Comando que envía un texo o valor y es visualizado en el Monitor Serie 
    Serial.println("Movimiento detectado"); //Imprime el texo "Movimiento detectado" en el monitor serie 
  }
  //Condicional else: Va justo despúes del if
  else { //Si no hay movimiento, apagar el LED
    digitalWrite(LED, LOW); // apagar LED
    Serial.println("No hay movimiento"); //Imprime el texo "No hay movimiento" en el monitor serie 
  }
}
