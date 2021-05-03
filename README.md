# LPS - Localizador Ultrasónico

El LPS o Localizador Ultrasónico es un sistema de posicionamiento local de objetos dentro de un espacio cerrado, através de la utilización
de diferentes sensores ultrasonidos, gracias a los cuales conseguiremos medir varias distancias al objeto desde diferentes posiciones
dentro del espacio cerrado, y asi situarlo dentro de este. Este sistema podría parecerse a un GPS convencional para interiores.

## Integrantes del equipo
<strong>Nombre            -            Usuario</strong>
<br />Antonio García Montes - antoniogmontes
<br />Joaquín Gabriel Huirse - jhuirse
<br />Jorge Riveiro - j-riveiro
<br />Sergio Rodriguez - Srsanz
<br />Javier Gasco - j-gasco


## Objetivo:
Desarrollar un dispositivo que mediante sensores y algoritmos detecte su posición en un recinto cerrado, parecido a un GPS rudimentario.
## Etapas de la aplicación:
-	Periodo de reconocimiento.
-	Colocación del dispositivo.
-	Cálculo de posición.
## Primera etapa: Periodo de aprendizaje.
Se realizará en un periodo previo al ejercicio. Se colocará el dispositivo, con al menos 4 sensores de ultrasonidos, en distintas posiciones de un espacio sin obstáculos para reconocer el entorno en el que está. Se almacenarán los datos obtenidos en ficheros.
## Segunda etapa: Colocación del dispositivo.
Se coloca el dispositivo, inmóvil, en la posición cuya localización se quiere conocer.
## Tercera etapa: Cálculo de posición.
Mediante los sensores ultrasonidos y la división del recinto en nueve zonas diferentes, se hará el cálculo de la posición del dispositivo en dicho recinto. Compara en una aplicación, que divide la zona en un recinto de 7x4, la posición obtenida en el periodo de aprendizaje almacenada en los ficheros, con la posición actual del dispositivo.
## Requisitos obligatorios:
Realizar el ejercicio con 4 sensores de ultrasonidos en un recinto cerrado, con las direcciones norte, sur, este y oeste.
## Requisitos opcionales:
Realizar el ejercicio con 8 sensores ultrasonidos, incluyendo así el noreste, noroeste, sureste y suroeste.
## Magnitudes físicas y datos de entrada:
La distancia será necesaria para que los sensores de ultrasonidos detecten la posición exacta del dispositivo. El sensor de ultrasonidos propuesto para el ejercicio es el HC-SR04. 
## Datos de salida:
La posición del dispositivo será la salida, y para ello se compararán los ficheros almacenados en el periodo de aprendizaje del entorno con los obtenidos en el ejercicio. 
