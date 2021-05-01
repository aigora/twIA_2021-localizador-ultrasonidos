#include <stdio.h>

/*Arduino tiene su propio sistema operativo basado en c++ asi que para comunicarse entre ellos hay librerias que nos podemos descargar, 
pero todavia no estoy muy seguro de como funcionan ambos. Bueno, para leer distancias en el software de Arduino, este codigo es un ejemplo con nuestro
sensor y no intenteis compilarlo xq no funciona ya que no esta conecatado con ninguna placa. Vereis que hay funciones raras pero son todas muy sencillas y
las he intentado explicar. Esto es solo un ejemplo de como funciona para que os hagais una idea, pero pensad que como tenemos 4 sensores habria que hacerlo 
como 4 veces? El que tenga la placa y los sensores que lo pruebe porfavor y me diga a ver si va bien.*/

#define trigPin 3 
#define echoPin 2

long distancia;                  //Esto son variables globales que ya se que no nos dejan usar pero como esto es un ejemplo da igual
long duracion;

void setup() {                   //Esta funcion es el bloque de configuracion y se ejecuta una sola vez, funciona un void main() mas o menos.
    Serial.begin(9600);          //Esto inicializa la operación del puerto serie a la velocidad especificada, la mayoria 9600
    pinMode(trigPin, OUTPUT);    //Se usa el pin 3 como salida,
    pinMode(echoPin, INPUT);     //Se usa el pin 2 como entrada. Ambos se pueden cambiar por supuesto dependiendo de donde conectes el cable.
}

void loop() {                           //A diferencia de void setup, void loop se ejecutará en bucle mientras el controlador Arduino permanezca encendido.
    distancia = readUltrasonicSensor();    //Esto es como una funcion, tipo de aqui pasa a leer "readUltrasonicSensor()" que es donde se mide la distancia.
    if (distancia >= 400 || distancia <= 0) {
        Serial.println("Valor desconocido");
    }
    else {
        Serial.print(distancia);    //Estos son como printfs
        Serial.println(" cm");
    }
    delay(500);     //Un delay en milisegundos
}

long readUltrasonicSensor() {
    // Envia un pulso de 10µs 
    digitalWrite(trigPin, HIGH);       //Cambia el voltaje del tringpin(el pin 3) a HIGH, o 5V.              
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);        //Cambia el voltaje del tringpin a LOW, o 0V.
    
    // Lee la duracion del pulso
    duration = pulseIn(echoPin, HIGH); /*pulseIn() lee un pulso (ALTO o BAJO) en un pin. Por ejemplo, si el valor es HIGH, pulseIn () espera que el pin pase
                                       de LOW a HIGH, comienza a cronometrar, luego espera a que el pin pase a LOW y detiene el cronometraje. Devuelve la 
                                       longitud del pulso en microsegundos o se rinde y devuelve 0 si no se recibió un pulso completo dentro del tiempo de 
                                       espera.*/
    Serial.println(duracion);          //Convierte y devuelve el valor
    return duration / 58;              //La duracion dividida entre 58 da la distancia en cm
}