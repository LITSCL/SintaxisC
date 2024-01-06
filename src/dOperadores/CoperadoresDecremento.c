#include <stdio.h>

int c_operadores_decremento() { //c_operadores_decremento

    int numero_1 = 0;

    //Decrementa en una unidad el valor de una variable numerica.
    numero_1--;
    --numero_1;
    numero_1 -= 1;

    printf("La variable decrementada es igual a: %d", numero_1);

    return 0;
}
