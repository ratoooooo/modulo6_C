#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

typedef struct
{
    char titulo[30];
    char autor[30];
    float prex;
    int ano;
} Livro;

void main()
{
    system("cls");
    Livro *ptr = NULL;

    ptr = (Livro *)malloc(sizeof(Livro));

    printf("Digite o título: ");
    fflush(stdin);
    gets(ptr->titulo);

    printf("Digite o autor: ");
    fflush(stdin);
    gets(ptr->autor);

    printf("Digite o preço: ");
    scanf("%f", &ptr->prex);

    printf("Digite o ano: ");
    scanf("%d", &ptr->ano);

    printf("Dados do livro:\n");
    printf("Título: %s\n", ptr->titulo);
    printf("Autor: %s\n", ptr->autor);
    printf("Preço: %.2f\n", ptr->prex);
    printf("Ano: %d\n", ptr->ano);

    free(ptr);
}