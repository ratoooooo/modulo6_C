#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    int codigo;
    char nome[20];
    float prex;
}Artigo;

void main()
{
    system("cls");
    char ch = 'a';
    int x = 5;
    float y=5.0;
    char s[10];
    int v[3] = {10, 20, 30};
    Artigo A1;
    Artigo dados[10];

    printf("Tamanho dos caracteres (byte) = %d\n", sizeof(char));
    printf("Tamanho dos inteiros (byte) = %d\n", sizeof(int));
    printf("Tamanho dos reais (byte) = %d\n\n", sizeof(float));

    printf("Tamanho dos caracteres (byte) = %d\n", sizeof(ch));
    printf("Tamanho dos inteiros (byte) = %d\n", sizeof(x));
    printf("Tamanho dos reais (byte) = %d\n\n", sizeof(y));

    printf("Tamanho da string s (byte) = %d\n", sizeof(s));
    printf("Tamanho do vetor v (byte) = %d\n", sizeof(v));
    printf("Tamanho da registo A1 (byte) = %d\n", sizeof(A1));
    printf("Tamanho da registo de dados (byte) = %d\n", sizeof(dados));

}