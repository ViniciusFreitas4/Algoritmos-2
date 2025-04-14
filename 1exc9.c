#include<stdio.h>
int numero(int num)
{
    if(num<0)
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
    int num;

    printf("digite um numero\n");

    scanf("%d",&num);

    numero(num);

    if(numero(num))
    {
        printf("%d negativo",num);
    }
    else
    {
        printf("%d positivo",num);
    }

    return 0;
}
