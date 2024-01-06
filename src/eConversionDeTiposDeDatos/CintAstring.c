#include <stdio.h>
#include <stdlib.h>

int c_int_a_string() { //c_int_a_string

    int numero_int = 10;

    char numero_char[20];

    snprintf(numero_char, sizeof(numero_char), "%d", numero_int);

    printf("%s", numero_char);

    return 0;

}
