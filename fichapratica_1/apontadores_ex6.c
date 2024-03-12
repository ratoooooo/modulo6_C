#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    int notas[5] = {10, 17, 6, 15, 20};
    int *ptr_notas;
    ptr_notas = notas;

    //primeira forma
    printf("%d\n", notas[0]);
    printf("%d\n", notas[4]);

    //segunda forma
    /*
    printf("%d\n", ptr_notas[0]);
    printf("%d\n", ptr_notas[4]);
    */

    //terceira forma
    printf("%d\n", *ptr_notas);
    printf("%d\n", *(ptr_notas + 4));

}