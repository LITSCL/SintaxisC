#include <stdio.h>

int a_operadores_aritmeticos() { //a_operadores_aritmeticos

	int numero_1 = 10;
	int numero_2 = 15;

	double suma = numero_1 + numero_2;
	printf("La suma de %d con %d es igual a: %lf\n", numero_1, numero_2, suma); //El simbolo "%lf" se utiliza para imprimir valores de punto flotante (En este caso, un double), finalmente se utiiza "\n" para hacer un salto de línea.

	double resta = numero_1 - numero_2;
	printf("La resta de %d con %d es igual a: %lf\n", numero_1, numero_2, resta);

	double multiplicacion = numero_1 * numero_2;
	printf("La multiplicación de %d con %d es igual a: %lf\n", numero_1, numero_2, multiplicacion);

	double division = (double)numero_1 / (double)numero_2;
	printf("La división de %d con %d es igual a: %lf\n", numero_1, numero_2, division);

	int modulo = numero_1 % numero_2;
	printf("El módulo de %d con %d es igual a: %d\n", numero_1, numero_2, modulo);

	return 0;
}
