#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    //Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e exiba o maior endereço.
    int num1, num2;

    if(&num1 > &num2)
    {
        printf("O endereço do numero 1 é o maior\n");
        printf("num1 = %d\n", &num1);
    }
    else
    {
        printf("O endereço do numero 2 é o maior\n");
        printf("num2 = %d\n", &num2);
    }
}