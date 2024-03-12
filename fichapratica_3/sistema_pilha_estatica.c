#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ShowStack(int stack[]);
void ShowMenu();
void Push(int stack[], int numero);
int IsFull(int stack[]);
int count(int stack[]);
void PopDown(int stack[]);
void PopUp(int stack[]);
int IsEmpty(int stack[]);

void main()
{
    system("cls");
    // LIFO - LAST IN FIRST OUT
    int pilha[10] = {0};
    int op, num;

    do
    {
        system("cls");
        ShowStack(pilha);
        int cont = count(pilha);
        printf("The stack has %d elements\n", cont);
        ShowMenu();
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("***Insert***\n");
            if (IsFull(pilha) == 1)
            {
                printf("It's not possible to add more elements\n");
                system("pause");
            }
            else
            {
                printf("Enter a number: \n");
                scanf("%d", &num);
                Push(pilha, num);
            }
            break;
        case 2:
            printf("***Remove***\n");
            if (IsEmpty(pilha) == 1)
            {
                printf("The stack is empty\n");
                system("pause");
            }
            else if (count(pilha) > 5)
            {
                PopDown(pilha);
            }
            else
            {
                PopUp(pilha);
            }
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

void ShowStack(int stack[])
{

    int i;
    for (i = 9; i >= 0; i--)
    {
        if (stack[i] == 0)
        {
            printf("|_0_|\n");
        }
        else
        {
            printf("|_%d_|\n", stack[i]);
        }
    }
}

void ShowMenu()
{
    printf("1-Insert\n");
    printf("2-Remove\n");
    printf("0-Exit\n");
    printf("Choose an option: \n");
}

void Push(int stack[], int numero)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (stack[i] == 0)
        {
            stack[i] = numero;
            break;
        }
    }
}

int IsFull(int stack[])
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (stack[i] == 0)
        {
            return 0;
        }
    }
    return 1;
}

int count(int stack[])
{
    int i;
    int soma = 0;
    for (i = 0; i < 10; i++)
    {
        if (stack[i] != 0)
        {
            soma++;
        }
        else
        {
            break;
        }
    }
    return soma;
}

void PopDown(int stack[])
{
    int i;
    for (i = 0; i < 9; i++)
    {
        if (stack[i] != 0)
        {
            stack[i] = 0;
            break;
        }
    }
}

void PopUp(int stack[])
{
    int i;
    for (i = 9; i >= 0; i--)
    {
        if (stack[i] != 0)
        {
            stack[i] = 0;
            break;
        }
    }
}

int IsEmpty(int stack[])
{
    if (stack[0] == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
