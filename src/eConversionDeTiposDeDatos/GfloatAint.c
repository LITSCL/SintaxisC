#include <stdio.h>
#include <stdlib.h>

int g_float_a_int() { //g_float_a_int

	float numero_float = 10; //Se declara e inicia la variable de tipo float.

	int numero_int = (int)numero_float; //Se refunde el dato de tipo float a int.

	printf("%d", numero_int);

	return 0;

}
