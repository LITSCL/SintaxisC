#include <stdio.h>

int e_double_a_float() { //e_double_a_float

	double numero_double = 10; //Se declara e inicia la variable de tipo double.

	float numero_float = (float)numero_double; //Se refunde el dato de tipo double a float.

	printf("%f", numero_float);

	return 0;

}
