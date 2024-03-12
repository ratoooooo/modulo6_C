#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    //Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas aritmética de apontadores, leia esse array do teclado e imprima o dobro de cada valor lido.
    int array[5];
    int *ptr = array;

    for(int i=0; i < 5; i++)
    {
        printf("Inisra o %d numero\n", i+1);
        scanf("%d", ptr+i);
        printf("O dobro do número é %d\n", *(ptr + i) * 2);
    }
}
