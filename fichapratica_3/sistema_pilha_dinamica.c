#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct El
{
    int num;
    struct El *proximo;
} Elem;

void ShowMenu();
Elem* Push(int numero, Elem *topo);
void showstack(Elem *elemento);
Elem* Pop(Elem *topo);

void main()
{
    system("cls");
    int op, numero;
    Elem *topo = NULL;
    do
    {
        system("cls");
        showstack(topo);
        ShowMenu();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("***Insert***\n");
            printf("Insert a number to insert in stack: ");
            scanf("%d", &numero);
            topo = Push(numero, topo);
            break; 
        case 2:
            printf("***Remove***\n");
            topo = Pop(topo);
            system("pause");
            break;
        case 0:
            system("cls");
            printf("Thank you for using our software\n");
            break;
        default:
            printf("Invalid\n");
        }
    } while (op != 0);
}

void ShowMenu()
{
    printf("\n1-Insert\n");
    printf("2-Remove\n");
    printf("0-Exit\n");
    printf("Choose an option: \n");
}

Elem* Push(int numero, Elem *topo)
{
    Elem *novo = (Elem *) malloc(sizeof(Elem));

    if (novo)
    {
        novo->num = numero;
        novo->proximo = topo;
        return novo;
    }
    else
    {
        printf("Memory allocation failed.\n");
        return NULL;
    }
}

void showstack(Elem *elemento)
{
    if (elemento != NULL)
    {
        printf("%d\n", elemento->num);

        if (elemento->proximo != NULL)
        {
            showstack(elemento->proximo);
        }
    }
}

Elem* Pop(Elem *topo)
{

    if (topo != NULL)
    {
    	Elem  *novotopo = topo->proximo;
        free(topo);
        return novotopo;
    }
    else
    {
        printf("A pilha esta vazia\n");
        return NULL;
    }
}
