#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int dobro(int *num1, int *num2);
void main() {
    system("cls");
    int num1, num2, soma;

    printf("Insira um numero:\n");
    scanf("%d", &num1);
    printf("Insira outro numero:\n");
    scanf("%d", &num2);

    soma = dobro(&num1, &num2);

    printf("A soma do dobro dos numeros lidos é: %d\n", soma);
    printf("O dobro do numero 1 é %d\n", num1);
    printf("O dobro do numero 2 é %d", num2);
}

int dobro(int *num1, int *num2) {
    int soma = (*num1 * 2) + (*num2 * 2);
    *num1 = *num1 * 2;
    *num2 = *num2 * 2;

    return soma;
}
