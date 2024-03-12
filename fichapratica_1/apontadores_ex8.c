#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void trocar(char *a, char *b);
void main()
{
    system("cls");
    char a='x', b='y';
    
    //variaveis antes da troca
    puts("Variaveis antes da troca\n");
    printf("a = %c\n", a);
    printf("b = %c\n", b);
    
    //trocar variaveis
    trocar(&a, &b);

    //variaveis depois da troca
    puts("Variaveis depois da troca\n");
    printf("a = %c\n", a);
    printf("b = %c\n", b);
}

void trocar(char *a,char *b)
{
    char temp;

    temp = *a;
    *a = *b;
    *b = temp;
}
