#include <stdio.h>
#include <stdlib.h>

typedef struct El
{
	int num;
    struct El *proximo;
}Elem;

void ShowMenu();
Elem* inserirticket(int numero);
Elem* Pop(Elem *inicio);
void showfila(Elem *ini);

int main()
{
    int numero = 1;
    char op;
    Elem *primeiro = NULL;
    Elem *ultimo = NULL;
    Elem *aux = NULL;

    do
    {
        system("cls");
        showfila(primeiro);
        ShowMenu();
        scanf(" %c", &op);
        switch (toupper(op))
        {
        case 'I':
        	aux = inserirticket(numero);
            if (primeiro == NULL)
            {
                primeiro = aux;
            }

            if (ultimo != NULL)
            {
                ultimo->proximo = aux;
            }

            ultimo = aux;
        	numero++;
            break;

        case 'P':
        	aux = Pop(primeiro);
            break;

        case 'S':
            printf("\nThank you for using the program\n");
            break;

        default:
            printf("\nInvalid option. Please choose a valid option.\n");
            system("pause");
            break;
        }
    } while (op != 'S');

    return 0;
}

void ShowMenu()
{
    printf("\n=========================================\n");
    printf("          Queue Management System\n");
    printf("=========================================\n");
    printf("Options:\n");
    printf("I - Insert Ticket\n");
    printf("P - Next Customer\n");
    printf("S - Exit\n");
    printf("=========================================\n");
    printf("Enter your choice: ");
}

Elem* inserirticket(int numero)
{
    Elem *novo = (Elem*)malloc(sizeof(Elem));
    novo->num = numero;
    novo->proximo = NULL;
    return novo;
}

Elem* Pop(Elem *inicio)
{
    if (inicio == NULL)
    {
        printf("\nQueue is empty.\n");
        return NULL;
    }

    Elem* remover = inicio;
    Elem* proximo = inicio->proximo;
    free(remover);
    return proximo;
}


void showfila(Elem *ini)
{
    if (ini != NULL)
    {
        printf("%d ", ini->num);
        showfila(ini->proximo);
    }
}
