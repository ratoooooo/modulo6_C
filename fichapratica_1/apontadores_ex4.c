#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    system("cls");
    char ch = 'a', *ptr = &ch;
    int x=5, *px = &x;
    float y=5.0, *py = &py;

    puts("Valor dos endereços no sistema deciamal\n");
    printf("ch = %c  %d\n", ch, (long) ptr);
    printf("ch = %c  %d\n\n", ch, (long) (ptr + 1));
    printf("x = %d  %d\n", x, px);
    printf("x = %d  %d\n\n", x+1,(long) (px + 1));
    printf("y = %.2f  %d\n", y, py);
    printf("y = %.2f  %d\n\n", y+1,(long) (py + 1));

    puts("Valor dos endereços no sistema hexadecimal\n");
    printf("ch = %c  %p\n", ch, ptr);
    printf("ch = %c  %p\n\n", ch, (ptr + 1));
    printf("x = %d  %p\n", x,  px);
    printf("x = %d  %p\n\n", x+1, (px + 1));
    printf("y = %.2f  %p\n", y,  py);
    printf("y = %.2f  %p\n", y+1, (py + 1));

    system("pause");
}
