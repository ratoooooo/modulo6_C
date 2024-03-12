#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    // Escreva um programa que declare um inteiro, um real e um char, e apontadores essas variáveis. Associe os endereços das variáveis aos apontadores.
    int num1 = 10;
    float num2 = 5.0;
    char letra1 = 'd';

    int *ptr_num1 = &num1;
    float *ptr_num2 = &num2;
    char *ptr_letra1 = &letra1;

    printf("Antes da alteração\n");
    printf("num1 = %d\n", *ptr_num1);
    printf("num2 = %.1f\n", *ptr_num2);
    printf("letra1 = %c\n", *ptr_letra1);

    *ptr_num1 = 7;
    *ptr_num2 = 2.65;
    *ptr_letra1 = 'c';

    printf("Depois da alteração\n");
    printf("num1 = %d\n", *ptr_num1);
    printf("num2 = %.1f\n", *ptr_num2);
    printf("letra1 = %c\n", *ptr_letra1);
}