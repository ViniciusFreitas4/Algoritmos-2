#include<stdio.h>
void idade(int num)
{
    if (num >= 5 && num <= 7)
    {
        printf("Infantil A\n");
    }
    else if (num >= 8 && num <= 10)
    {
        printf("Infantil B\n");
    }
    else if (num >= 11 && num <= 13)
    {
        printf("Juvenil A\n");
    }
    else if (num >= 14 && num <= 17)
    {
        printf("Juvenil B\n");
    }
    else if (num >= 18)
    {
        printf("Adulto\n");
    }
    else
    {
        printf("Idade inválida para a classificação\n");
    }

}
int main()
{
    int num;

    printf("entre com a idade (anos>5)");

    scanf("%d",&num);

    idade(num);

    return 0;
}
