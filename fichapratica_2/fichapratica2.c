#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");

    char c = 'A';
    char *pc = &c;
    int i = 1, *pi = &i;
    double d = 1.0, *pd = &d;

    *pc = 'B';
    *pi = -1;                                                         
    *pd = 0.1;

    printf("Tamanho ocupado pelo seu tipo\n");
    printf("c = %d\n", sizeof(char));
    printf("pc = %d\n", sizeof(char));
    printf("i = %d\n", sizeof(int));
    printf("pi = %d\n", sizeof(int));
    printf("d = %d\n", sizeof(double));
    printf("pd = %d\n", sizeof(double));

    printf("Endereço\n");
    printf("c = %d\n", &c);
    printf("pc = %d\n", &pc);
    printf("i = %d\n", &i);
    printf("pi = %d\n", &pi);
    printf("d = %d\n", &d);
    printf("pd = %d\n", &pd);

    printf("Conteudo\n");
    printf("c = %c\n", c);
    printf("pc = %c\n", *pc);
    printf("i = %d\n", i);
    printf("pi = %d\n", *pi);
    printf("d = %lf\n", d);
    printf("pd = %lf\n", *pd);

    printf("Valor apontado pleos apontadores\n");
    printf("pc = %c\n", *pc);
    printf("pi = %d\n", *pi);
    printf("pd = %lf\n", *pd);

}