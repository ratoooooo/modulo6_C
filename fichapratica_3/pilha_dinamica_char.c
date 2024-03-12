#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct El
{
    char letra;
    struct El *proximo;
} Elem;

void ShowMenu();
void showstack(Elem *elemento);
Elem* Push(char letra, Elem *topo);
Elem* Pop(Elem *topo);
void main()
{
	system("cls");
	int op;
	char letra;
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
            printf("Insert a char to insert in stack: ");
            fflush(stdin);
            scanf("%c", &letra);
            topo = Push(letra, topo);
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

Elem* Push(char letra, Elem *topo)
{
	Elem *novo = (Elem *) malloc(sizeof(Elem));
    if(novo)
    {
    	novo->letra = letra;
    	novo->proximo = topo;
    	return novo;
    }
}

void showstack(Elem *elemento)
{
    if (elemento != NULL)
    {
        printf("%c\n", elemento->letra);

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
 
