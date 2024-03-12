#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void dobro(int v, int *r);
int main()
{
    int v = 10, r = 10;
    dobro(v, &r);
    printf("\nFora v = %d \t r = %d ", v, r);

    return 0;
}

void dobro(int v, int *r)
{
    *r = 2 * v;
    printf("\nDentro v = %d \t r = %d ", v, *r);
}
