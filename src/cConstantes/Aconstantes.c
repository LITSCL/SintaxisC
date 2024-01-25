#include <stdio.h>

int a_constantes() { //a_constantes

	//Declaración e iniciación de constantes en una sola línea.
	const int numero_1 = 10;
	const double numero_2 = 10.3;
	const float numero_3 = 10.3f;
	const char texto_1[250]; snprintf(texto_1, sizeof(texto_1), "Hola Mundo");

	return 0;

}

