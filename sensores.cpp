#include <stdio.h>

int main()
{
	float distancia1 = 33.33, distancia2 = 33.33, distancia3 = 33.33, distancia4 = 33.33, distancia5 = 33.33, distancia6 = 33.33, distancia7 = 33.33, distancia8 = 33.33;
	float sensor1 = 0.0, sensor2 = 0.0, sensor3 = 0.0, sensor4 = 0.0, sensor5 = 0.0, sensor6 = 0.0, sensor7 = 0.0, sensor8 = 0.0;

	printf("introduzca distancia del sensor 1: ");
	scanf_s("%f", &distancia1);
	printf("introduzca distancia del sensor 2: ");
	scanf_s("%f", &distancia2);
	printf("introduzca distancia del sensor 3: ");
	scanf_s("%f", &distancia3);
	printf("introduzca distancia del sensor 4: ");
	scanf_s("%f", &distancia4);
	printf("introduzca distancia del sensor 5: ");
	scanf_s("%f", &distancia5);
	printf("introduzca distancia del sensor 6: ");
	scanf_s("%f", &distancia6);
	printf("introduzca distancia del sensor 7: ");
	scanf_s("%f", &distancia7);
	printf("introduzca distancia del sensor 8: ");
	scanf_s("%f", &distancia8);
	
	sensor1 = distancia1;
	sensor2 = distancia2;
	sensor3 = distancia3;
	sensor4 = distancia4;
	sensor5 = distancia5; 
	sensor6 = distancia6;
	sensor7 = distancia7;
	sensor8 = distancia8;

	do
	{
		if (sensor1 > 0 && sensor1 < 5.18)
		{
			printf("El objeto se encuentra en la casilla A1");
			return 0;
		}

		if (sensor1 > 5.18 && sensor1 < 9.06)
		{
			printf("El objeto se encuentra en la casilla A2");
			return 0;
		}

		if (sensor1 > 9.06 && sensor1 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas A2 y A3");
			return 0;
		}

		if (sensor1 > 9.32 && sensor1 < 13.04)
		{
			printf("El objeto se encuentra en la casilla A3");
			return 0;
		}

		if (sensor1 > 13.04 && sensor1 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas A3 y A4");
			return 0;
		}

		if (sensor1 > 13.46 && sensor1 < 17.03)
		{
			printf("El objeto se encuentra en la casilla A4");
			return 0;
		}

		if (sensor1 > 17.03 && sensor1 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas A4 y A5");
			return 0;
		}

		if (sensor1 > 17.60 && sensor1 < 21.02)
		{
			printf("El objeto se encuentra en la casilla A5");
			return 0;
		}

		if (sensor1 > 21.02 && sensor1 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas A5 y A6");
			return 0;
		}

		if (sensor1 > 21.74 && sensor1 < 25.02)
		{
			printf("El objeto se encuentra en la casilla A6");
			return 0;
		}

		if (sensor1 > 25.02 && sensor1 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas A6 y A7");
			return 0;
		}

		if (sensor1 > 25.88 && sensor1 < 30.02)
		{
			printf("El objeto se encuentra en la casilla A7");
			return 0;
		}
	} while (sensor1>0 && sensor1<30.02);


// EMPIEZA EL SENSOR 2

	do
	{
		if (sensor2 > 0 && sensor2 < 5.18)
		{
			printf("El objeto se encuentra en la casilla A7");
			return 0;
		}

		if (sensor2 > 5.18 && sensor2 < 9.06)
		{
			printf("El objeto se encuentra en la casilla A6");
			return 0;
		}

		if (sensor2 > 9.06 && sensor2 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas A6 y A5");
			return 0;
		}

		if (sensor2 > 9.32 && sensor2 < 13.04)
		{
			printf("El objeto se encuentra en la casilla A5");
			return 0;
		}

		if (sensor2 > 13.04 && sensor2 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas A5 y A4");
			return 0;
		}

		if (sensor2 > 13.46 && sensor2 < 17.03)
		{
			printf("El objeto se encuentra en la casilla A4");
			return 0;
		}

		if (sensor2 > 17.03 && sensor2 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas A4 y A3");
			return 0;
		}

		if (sensor2 > 17.60 && sensor2 < 21.02)
		{
			printf("El objeto se encuentra en la casilla A3");
			return 0;
		}

		if (sensor2 > 21.02 && sensor2 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas A3 y A2");
			return 0;
		}

		if (sensor2 > 21.74 && sensor2 < 25.02)
		{
			printf("El objeto se encuentra en la casilla A2");
			return 0;
		}

		if (sensor2 > 25.02 && sensor2 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas A2 y A1");
			return 0;
		}

		if (sensor2 > 25.88 && sensor2 < 30.02)
		{
			printf("El objeto se encuentra en la casilla A1");
			return 0;
		}
	} while (sensor1 > 30.0 && sensor2>0 && sensor2<30.02);

// EMPIEZA EL SENSOR 3


	do
	{
		if (sensor3 > 0 && sensor3< 5.18)
		{
			printf("El objeto se encuentra en la casilla B1");
			return 0;
		}

		if (sensor3 > 5.18 && sensor3 < 9.06)
		{
			printf("El objeto se encuentra en la casilla B2");
			return 0;
		}

		if (sensor3 > 9.06 && sensor3 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas B2 y B3");
			return 0;
		}

		if (sensor3 > 9.32 && sensor3 < 13.04)
		{
			printf("El objeto se encuentra en la casilla B3");
			return 0;
		}

		if (sensor3 > 13.04 && sensor3 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas B3 y B4");
			return 0;
		}

		if (sensor3 > 13.46 && sensor3 < 17.03)
		{
			printf("El objeto se encuentra en la casilla B4");
			return 0;
		}

		if (sensor3 > 17.03 && sensor3 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas B4 y B5");
			return 0;
		}

		if (sensor3 > 17.60 && sensor3 < 21.02)
		{
			printf("El objeto se encuentra en la casilla B5");
			return 0;
		}

		if (sensor3 > 21.02 && sensor3 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas B5 y B6");
			return 0;
		}

		if (sensor3 > 21.74 && sensor3 < 25.02)
		{
			printf("El objeto se encuentra en la casilla B6");
			return 0;
		}

		if (sensor3 > 25.02 && sensor3 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas B6 y B7");
			return 0;
		}

		if (sensor3 > 25.88 && sensor3 < 30.02)
		{
			printf("El objeto se encuentra en la casilla B7");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 > 30.02 && sensor3 > 0 && sensor3 < 30.02);


// AQUI EMPIEZA EL SENSOR 4

	do
	{
		if (sensor4 > 0 && sensor4 < 5.18)
		{
			printf("El objeto se encuentra en la casilla B7");
			return 0;
		}

		if (sensor4 > 5.18 && sensor4 < 9.06)
		{
			printf("El objeto se encuentra en la casilla B6");
			return 0;
		}

		if (sensor4 > 9.06 && sensor4 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas B6 y B5");
			return 0;
		}

		if (sensor4 > 9.32 && sensor4 < 13.04)
		{
			printf("El objeto se encuentra en la casilla B5");
			return 0;
		}

		if (sensor4 > 13.04 && sensor4 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas B5 y B4");
			return 0;
		}

		if (sensor4 > 13.46 && sensor4 < 17.03)
		{
			printf("El objeto se encuentra en la casilla B4");
			return 0;
		}

		if (sensor4 > 17.03 && sensor4 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas B4 y B3");
			return 0;
		}

		if (sensor4 > 17.60 && sensor4 < 21.02)
		{
			printf("El objeto se encuentra en la casilla B3");
			return 0;
		}

		if (sensor4 > 21.02 && sensor4 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas B3 y B2");
			return 0;
		}

		if (sensor4 > 21.74 && sensor4 < 25.02)
		{
			printf("El objeto se encuentra en la casilla B2");
			return 0;
		}

		if (sensor4 > 25.02 && sensor4 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas B2 y B1");
			return 0;
		}

		if (sensor4 > 25.88 && sensor4 < 30.02)
		{
			printf("El objeto se encuentra en la casilla B1");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 == 30.02 && sensor3 == 30.02 && sensor4<0 && sensor4<30.02);

	
	// EMPIEZA EL SENSOR 5


	do
	{
		if (sensor5 > 0 && sensor5 < 5.18)
		{
			printf("El objeto se encuentra en la casilla C1");
			return 0;
		}

		if (sensor5 > 5.18 && sensor5 < 9.06)
		{
			printf("El objeto se encuentra en la casilla C2");
			return 0;
		}

		if (sensor5 > 9.06 && sensor5 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas C2 y C3");
			return 0;
		}

		if (sensor5 > 9.32 && sensor5 < 13.04)
		{
			printf("El objeto se encuentra en la casilla C3");
			return 0;
		}

		if (sensor5 > 13.04 && sensor5 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas C3 y C4");
			return 0;
		}

		if (sensor5 > 13.46 && sensor5 < 17.03)
		{
			printf("El objeto se encuentra en la casilla C4");
			return 0;
		}

		if (sensor5 > 17.03 && sensor5 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas C4 y C5");
			return 0;
		}

		if (sensor5 > 17.60 && sensor5 < 21.02)
		{
			printf("El objeto se encuentra en la casilla C5");
			return 0;
		}

		if (sensor5 > 21.02 && sensor5 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas C5 y C6");
			return 0;
		}

		if (sensor5 > 21.74 && sensor5 < 25.02)
		{
			printf("El objeto se encuentra en la casilla C6");
			return 0;
		}

		if (sensor5 > 25.02 && sensor5 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas C6 y C7");
			return 0;
		}

		if (sensor5 > 25.88 && sensor5 < 30.02)
		{
			printf("El objeto se encuentra en la casilla C7");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 > 30.02 && sensor3 > 30.02 && sensor4 > 30.02  && sensor5 > 0 && sensor5 < 30.02);


	// EMPIEZA EL SENSOR 6

	do
	{
		if (sensor6 > 0 && sensor6 < 5.18)
		{
			printf("El objeto se encuentra en la casilla C7");
			return 0;
		}

		if (sensor6 > 5.18 && sensor6 < 9.06)
		{
			printf("El objeto se encuentra en la casilla C6");
			return 0;
		}

		if (sensor6 > 9.06 && sensor6 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas C6 y C5");
			return 0;
		}

		if (sensor6 > 9.32 && sensor6 < 13.04)
		{
			printf("El objeto se encuentra en la casilla C5");
			return 0;
		}

		if (sensor6 > 13.04 && sensor6 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas C5 y C4");
			return 0;
		}

		if (sensor6 > 13.46 && sensor6 < 17.03)
		{
			printf("El objeto se encuentra en la casilla C4");
			return 0;
		}

		if (sensor6 > 17.03 && sensor6 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas C4 y C3");
			return 0;
		}

		if (sensor6 > 17.60 && sensor6 < 21.02)
		{
			printf("El objeto se encuentra en la casilla C3");
			return 0;
		}

		if (sensor6 > 21.02 && sensor6 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas C3 y C2");
			return 0;
		}

		if (sensor6 > 21.74 && sensor6 < 25.02)
		{
			printf("El objeto se encuentra en la casilla C2");
			return 0;
		}

		if (sensor6 > 25.02 && sensor6 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas C2 y C1");
			return 0;
		}

		if (sensor6 > 25.88 && sensor6 < 30.02)
		{
			printf("El objeto se encuentra en la casilla C1");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 > 30.02 && sensor3 > 30.02 && sensor4 > 30.02 && sensor5 > 30.02 && sensor6 < 0 && sensor6 < 30.02);

	// EMPIEZA EL SENSOR 7

	do
	{
		if (sensor7 > 0 && sensor7 < 5.18)
		{
			printf("El objeto se encuentra en la casilla D1");
			return 0;
		}

		if (sensor7 > 5.18 && sensor7 < 9.06)
		{
			printf("El objeto se encuentra en la casilla D2");
			return 0;
		}

		if (sensor7 > 9.06 && sensor7 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas D2 y D3");
			return 0;
		}

		if (sensor7 > 9.32 && sensor7 < 13.04)
		{
			printf("El objeto se encuentra en la casilla D3");
			return 0;
		}

		if (sensor7 > 13.04 && sensor7 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas D3 y D4");
			return 0;
		}

		if (sensor7 > 13.46 && sensor7 < 17.03)
		{
			printf("El objeto se encuentra en la casilla D4");
			return 0;
		}

		if (sensor7 > 17.03 && sensor7 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas D4 y D5");
			return 0;
		}

		if (sensor7 > 17.60 && sensor7 < 21.02)
		{
			printf("El objeto se encuentra en la casilla D5");
			return 0;
		}

		if (sensor7 > 21.02 && sensor7 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas D5 y D6");
			return 0;
		}

		if (sensor7 > 21.74 && sensor7 < 25.02)
		{
			printf("El objeto se encuentra en la casilla D6");
			return 0;
		}

		if (sensor7 > 25.02 && sensor7 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas D6 y D7");
			return 0;
		}

		if (sensor7 > 25.88 && sensor7 < 30.02)
		{
			printf("El objeto se encuentra en la casilla D7");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 > 30.02 && sensor3 > 30.02 && sensor4 > 30.02 && sensor5 > 30.02 && sensor6 > 30.02 && sensor7 > 0 && sensor7 < 30.02);



	// EMPIEZA EL SENSOR 8

	do
	{
		if (sensor8 > 0 && sensor8 < 5.18)
		{
			printf("El objeto se encuentra en la casilla D7");
			return 0;
		}

		if (sensor8 > 5.18 && sensor8 < 9.06)
		{
			printf("El objeto se encuentra en la casilla D6");
			return 0;
		}

		if (sensor8 > 9.06 && sensor8 < 9.32)
		{
			printf("El objeto se encuentra entre las casillas D6 y D5");
			return 0;
		}

		if (sensor8 > 9.32 && sensor8 < 13.04)
		{
			printf("El objeto se encuentra en la casilla D5");
			return 0;
		}

		if (sensor8 > 13.04 && sensor8 < 13.46)
		{
			printf("El objeto se encuentra entre las casillas D5 y D4");
			return 0;
		}

		if (sensor8 > 13.46 && sensor8 < 17.03)
		{
			printf("El objeto se encuentra en la casilla D4");
			return 0;
		}

		if (sensor8 > 17.03 && sensor8 < 17.60)
		{
			printf("El objeto se encuentra entre las casillas D4 y D3");
			return 0;
		}

		if (sensor8 > 17.60 && sensor8 < 21.02)
		{
			printf("El objeto se encuentra en la casilla D3");
			return 0;
		}

		if (sensor8 > 21.02 && sensor8 < 21.74)
		{
			printf("El objeto se encuentra entre las casillas D3 y D2");
			return 0;
		}

		if (sensor8 > 21.74 && sensor8 < 25.02)
		{
			printf("El objeto se encuentra en la casilla D2");
			return 0;
		}

		if (sensor8 > 25.02 && sensor8 < 25.88)
		{
			printf("El objeto se encuentra entre las casillas D2 y D1");
			return 0;
		}

		if (sensor8 > 25.88 && sensor8 < 30.02)
		{
			printf("El objeto se encuentra en la casilla D1");
			return 0;
		}
	} while (sensor1 > 30.02 && sensor2 > 30.02 && sensor3 > 30.02 && sensor4 > 30.02 && sensor5 > 30.02 && sensor6 > 30.02 && sensor7 > 30.02 && sensor8 < 0 && sensor8 < 30.02);



}
