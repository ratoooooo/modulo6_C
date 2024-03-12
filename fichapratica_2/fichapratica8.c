#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    // Crie um programa que contenha um array de inteiros contendo 10 elementos. Imprima o endereço de cada elemento desse array.

    int array[10];

    for (int i = 0; i < 10; i++)
    {
        printf("%d enedreco - %d\n", i + 1, &array[i]);
    }
}
