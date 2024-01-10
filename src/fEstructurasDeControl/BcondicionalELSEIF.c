#include <stdio.h>

int main() { //b_condicional_elseif

	//NOTA: Utilizar la condición IF sin corchetes (Forma 2), solo funciona cuando existe una única instrucción.

	int numero_1 = 13;
	int numero_2 = 12;
	int numero_3 = 11;
	int numero_4 = 10;

	//1. Condicion ELSE IF (Forma 1).
	if (numero_1 < numero_4) { //Se evalúa la primera condición
		printf("La primera condición se cumple\n"); //Si la condición se cumplió, se ejecuta el código y se ignoran las demas condiciones, de no ser asi, se procede a evaluar la proxima condición.
	}
	else if (numero_1 < numero_3) {
		printf("La segunda condición se cumple\n");
	}
	else if (numero_1 < numero_2) {
		printf("La tercera condición se cumple\n");
	}
	else {
		printf("Ninguna condición se cumplió\n"); //Si ninguna condición se cumplió, se ejecuta esta instrucción.
	}

	//2. Condicion ELSE IF (Forma 2).
	if (numero_1 < numero_4) //Se evalúa la primera condición.
		printf("La primera condición se cumple\n"); //Si la condición se cumplió, se ejecuta el código y se ignoran las demas condiciones, de no ser asi, se procede a evaluar la proxima condición.
	else if (numero_1 < numero_3)
		printf("La segunda condición se cumple\n");
	else if (numero_1 < numero_2)
		printf("La tercera condición se cumple\n");
	else
		printf("Ninguna condición se cumplió\n"); //Si ninguna condición se cumplió, se ejecuta esta instrucción.

	return 0;

}

