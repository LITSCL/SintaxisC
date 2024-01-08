#include <stdio.h>
#include <stdlib.h>

int f_double_a_string() { //f_double_a_string

	double numero_double = 10; //Se declara e inicia la variable de tipo double.

	char numero_string[20]; snprintf(numero_string, sizeof(numero_string), "%f", numero_double);

	printf("%s", numero_string);

	return 0;

}
