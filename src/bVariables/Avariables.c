#include <stdio.h>

int a_variables() { //a_variables

	//Declaración de Variables.
	int numero_1;
	double numero_2;
	float numero_3;
	char texto_1[250]; //Se utiliza un arreglo de caracteres para representar la cadena, ya que en C no existen los strings.
	int booleano_1; //No existe el tipo de dato booleano, pero se simulan usando los enteros 0 y 1.

	//Iniciación de Variables.
	numero_1 = 10;
	numero_2 = 10.3;
	numero_3 = 10.3F;
	snprintf(texto_1, sizeof(texto_1), "Hola Mundo");
	booleano_1 = 1; //Se utiliza el 1 para representar true y el 0 para representar false.

	//Declaración e iniciación de variables en una sola línea.
	int numero_1v2 = 10;
	double numero_2v2 = 10.3;
	float numero_3v2 = 10.3F;
	char texto_1v2[250]; snprintf(texto_1v2, sizeof(texto_1v2), "Hola Mundo");
	int booleano_1v2 = 1;

	//Declaración de múltiples variables de un mismo tipo en una sola línea.
	int numero_1v3, numero_2v3, numero_3v3;

	//Declaración e iniciación de múltiples variables de un mismo tipo en una sola línea.
	int numero_1v4 = 10, numero_2v4 = 11, numero_3v4 = 12;

	return 0;

}

