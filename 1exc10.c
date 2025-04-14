#include<stdio.h>
int numero(int num)
{
    if(num%2==0)
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
        printf("%d par",num);
    }
    else
    {
        printf("%d impar",num);
    }

    return 0;
}
