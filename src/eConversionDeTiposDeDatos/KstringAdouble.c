#include <stdio.h>
#include <stdlib.h>

int k_string_a_double() { //k_string_a_double

    char numero_string[20] = "10"; //Se declara e inicia la variable de tipo string.

    double numero_double = atof(numero_string); //La función "atof" convierte una cadena de texto y la retorna como punto flotante.

    printf("%f", numero_double);

    return 0;

}
