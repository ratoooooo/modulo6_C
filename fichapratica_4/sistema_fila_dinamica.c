#include <stdio.h>
#include <stdlib.h>

typedef struct El
{
    int num;
    struct El *proximo;
} Elem;

void ShowMenu();
void showfila(Elem *ini);
Elem* Push(int numero);
Elem* Pop(Elem *primeiro);

void main()
{
    system("cls");

    int num;
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
            printf("Insert\n");
            printf("Insira um numero\n");
            scanf("%d", &num);

            aux = Push(num);

            if (primeiro == NULL)
            {
                primeiro = aux;
            }

            if (ultimo != NULL)
            {
                ultimo->proximo = aux;
            }

            ultimo = aux;

            break;

        case 'R':
        	printf("***Remove***\n");
        	if(primeiro != NULL)
			{
        		aux = Pop(primeiro);
        		if(primeiro == ultimo)
				{
        			primeiro = NULL;
        			ultimo = NULL;
        		}
        		else
				{
        			primeiro = aux;
        		}
        	}
        	else
			{
        		printf("Não é possivel remover mais elementos");
        		system("pause");
        	}
            break;
            
		case 'S':
			printf("Onbrigado por usar o programa\n");
			break;
			
        default:
            break;
        }
    } while (op != 'S');

}

void ShowMenu()
{
    printf("\ni-Insert\n");
    printf("r-Remove\n");
    printf("s-Exit\n");
    printf("Choose an option: \n");
}

void showfila(Elem *ini)
{
    if (ini != NULL)
    {
        printf("%d ", ini->num);
        showfila(ini->proximo);
    }
}

Elem* Push(int numero)
{
    Elem *novo = (Elem*)malloc(sizeof(Elem));
    novo->num = numero;
    novo->proximo = NULL;
    return novo;
}

Elem* Pop(Elem *primeiro)
{
	Elem* remover = primeiro;
	free(primeiro);  
	return remover->proximo; 
}

