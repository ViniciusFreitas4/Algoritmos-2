#include<stdio.h>
int perfeito(int numero)
{
    int soma_div=0;
    for (int i = 1; i < numero; i++)
        {
            if (numero % i == 0)
            {
            soma_div += i;
            }
        }

        if(soma_div==numero)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}
int main()
{
    int numero;

    printf("digite um numero\n");

    scanf("%d",&numero);

    if(perfeito(numero))
    {
        printf("%d numero perfeito\n",numero);
    }
    else
    {
        printf("%d nao e numero perfeito",numero);
    }

    return 0;
}



