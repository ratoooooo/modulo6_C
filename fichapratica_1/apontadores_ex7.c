#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    char s[4] = "abcd";
    char *ps = s;

    for (int i=3; i >= 0; i--)
    {
        printf("%c", *(ps+i));
    }
}