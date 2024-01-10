#include <stdio.h>
#include <stdlib.h>

int l_string_a_float() { //l_string_a_float

	char numero_string[20] = "10"; //Se declara e inicia la variable de tipo string.

	float numero_float = atof(numero_string); //La función "atof" convierte una cadena de texto y la retorna como punto flotante.

	printf("%f", numero_float);

	return 0;

}
