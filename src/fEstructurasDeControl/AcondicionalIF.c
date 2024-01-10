#include <stdio.h>

int a_condicional_if() { //a_condicional_if

	//NOTA: Utilizar la condición IF sin corchetes (Forma 2), solo funciona cuando existe una única instrucción.

	int numero_1 = 10;
	int numero_2 = 15;

	//1. Condicion IF (Forma 1).
	if (numero_1 < numero_2) { //En esta instrucción se evalúa la condición.
		printf("%d es menor que %d\n", numero_1, numero_2); //Si la condición se cumple se ejecuta este código.
	}
	else {
		printf("%d es mayor que %d\n", numero_1, numero_2); //Si la condición no se cumple se ejecuta este código.
	}

	//2. Condicion IF (Forma 2).
	if (numero_1 < numero_2) //En esta instrucción se evalúa la condición.
		printf("%d es menor que %d\n", numero_1, numero_2); //Si la condición se cumple se ejecuta este código.
	else
		printf("%d es mayor que %d\n", numero_1, numero_2); //Si la condición no se cumple se ejecuta este código.

	return 0;

}
