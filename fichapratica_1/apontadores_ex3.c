#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    
    int a=5, b=7;
    int *ptr=NULL;
    ptr = &a;

    printf("Apontado por ptr = %d\n", *ptr);
    printf("a = %d\n", a);
    printf("Enderelo de a = %d\n", ptr);

    system("pause");
}
