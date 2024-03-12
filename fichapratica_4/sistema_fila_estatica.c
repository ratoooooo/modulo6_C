#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ShowFila(int fila[]);
void ShowMenu();
int IsFull(int fila[]);
void Push(int fila[], int numero);
int Pop(int fila[]);
void main()
{
    system("cls");
    // FIFO - FIRST IN FIRST OUT

    int fila[10] = {0};
    int num;
    char op;
    do
    {
        system("cls");
        ShowFila(fila);
        ShowMenu();
        scanf(" %c", &op);
        switch (op)
        {
        case 'a':
            printf("Insert\n");
            if (IsFull(fila))
            {
                printf("It's not possible to add more elements\n");
                system("pause");
            }
            else
            {
                printf("Enter a number: \n");
                scanf("%d", &num);
                Push(fila, num);
            }
            break;

        case 'b':
			printf("***Remove***\n");
            if (IsEmpty(fila))
            {
                printf("The stack is empty\n");
                system("pause");
            }
            else
            {
            	int sucesso;
            	sucesso = Pop(fila);
            	if(sucesso == 1)
            	{
            		printf("Não é possivel adicionar mais nehum elemento");
            	}
            	else
            	{
            		Pop(fila);
            	}

            }
            break;

        default:
            break;
        }
    } while (op != 's');
}
void ShowMenu()
{
    printf("\na-Insert\n");
    printf("b-Remove\n");
    printf("s-Exit\n");
    printf("Choose an option: \n");
}

void ShowFila(int fila[])
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (fila[i] == 0)
        {
            printf("|_0_|");
        }
        else
        {
            printf("|_%d_|", fila[i]);
        }
    }
}

void Push(int fila[], int numero)
{
    int i;
    for (i = 0; i <= 9; i++)
    {
        if (fila[i] == 0)
        {
            fila[i] = numero;
            break;
        }
    }
}

int IsFull(int fila[])
{
	if(fila[9]!= 0)
	{
		return 1; //true
	}
	else
	{
		return 0; //false
	}
}

int IsEmpty(int fila[])
{
    if (fila[0] == 0)
    {
        return 1; //true
    }
    else
    {
        return 0; //false
    }
}

int Pop(int fila[])
{
    int i, remove = 0;
    for (i = 0; i <= 9; i++)
    {
    	if (fila[i] == 0)
    	{
    		break;
    	}
    	else
    	{
    		fila[i] = fila[i + 1];
    		remove = 1;
    	}
    }
    return remove;
}
