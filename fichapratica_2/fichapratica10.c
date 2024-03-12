#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    //Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do teclado e imprima o endereço das posições contendo valores pares.
    int array[5];
    int *ptr = array;

    for(int i=0; i < 5; i++)
    {
        printf("Inisra o %d numero\n", i+1);
        scanf("%d", ptr+i);
    }

    for (int i = 0; i < 5; i++) 
    {
        if (*(ptr + i) % 2 == 0) 
        {
            printf("Endereço da posição %d: %p\n", i+1, (ptr + i));
        }
    }
}