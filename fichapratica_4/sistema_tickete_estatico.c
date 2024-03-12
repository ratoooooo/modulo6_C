#include <stdio.h>
#include <stdlib.h>

void ShowMenu();
int inserirticket(int fila[], int numero);
int proxcli(int fila[]);
int main()
{
    int fila[10] = {0};
    int numero = 1;
    char op;
    do
    {
        system("cls");
        ShowMenu();
        scanf(" %c", &op);
        switch (toupper(op))
        {
        case 'I':
            if (numero <= 10)
            {
                numero = inserirticket(fila, numero);
                printf("\nTicket %d added successfully\n", numero - 1);
            }
            else
            {
                printf("\nThe ticket limit has been reached\n");
            }
            system("pause");
            break;

        case 'P':
            int cliente = proxcli(fila);
            if (cliente != -1)
            {
                printf("\nNext customer served: Ticket %d\n", cliente);
            }
            else
            {
                printf("\nThere are no customers in the queue\n");
            }
            system("pause");
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
    printf("=========================================\n");
    printf("          Queue Management System\n");
    printf("=========================================\n");
    printf("Options:\n");
    printf("I - Insert Ticket\n");
    printf("P - Next Customer\n");
    printf("S - Exit\n");
    printf("=========================================\n");
    printf("Enter your choice: ");
}

int inserirticket(int fila[], int numero)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (fila[i] == 0)//verefica se existe espaços vazios
        {
            fila[i] = numero;//troca essa posição vazia por um numero
            numero++;//incrementa mais um numero
            break;
        }
    }
    return numero;
}

int proxcli(int fila[])
{
    int i, ProxCli = -1;
    for (i = 0; i < 10; i++)
    {
        if (fila[i] != 0)//verefica se existe clientes
        {
            ProxCli = fila[i]; //troca essa posição por -1
            fila[i] = 0; //poe 0 nesssa posição para indicar que nao existe cliente
            break;
        }
    }
    return ProxCli;
}
