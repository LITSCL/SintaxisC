#include <stdio.h>
#include <stdlib.h>

int i_float_a_string() { //i_float_a_string

	float numero_float = 10.f; //Se declara e inicia la variable de tipo float.

	char numero_string[20]; snprintf(numero_string, sizeof(numero_string), "%f", numero_float);

	printf("%s", numero_string);

	return 0;

}
