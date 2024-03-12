#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    // Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em seguida, compare seus endereços e exiba o conteúdo do maior endereço.
    //  ex num1 = 7; num2 = 8
    // if &num1 > &num2´
    // printf(num1)
    system("cls");
    int num1, num2;

    printf("Inoisra um numero inteiro\n");
    scanf("%d", &num1);
    printf("Inoisra um numero inteiro\n");
    scanf("%d", &num2);

    if (&num1 > &num2)
    {
        printf("O valor do maior endreço foi %d", num1);
    }
    else
    {
        printf("O valor do maior endereço foi%d", num2);
    }
}