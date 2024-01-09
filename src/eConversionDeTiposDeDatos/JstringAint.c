#include <stdio.h>
#include <stdlib.h>

int j_string_a_int() { //j_string_a_int

    char numero_string[] = "10"; //Se declara e inicia la variable de tipo string.

    int numero_int = atoi(numero_string); //La función "atoi" convierte una cadena de texto y la retorna como entero.

    printf("%d", numero_int);

    return 0;
}
