#include<stdio.h>
void nota(float num)
{
    if(num>=0.0 && num<=4.9)
    {
        printf("D");
    }
    else if(num>=5.0 && num<=6.9)
    {
        printf("C");
    }
    else if(num>=7.0 && num<=8.9)
    {
        printf("B");
    }
    else if(num>=9.0 && num<=10.0)
    {
        printf("A");
    }
}
int main()
{
    float num;

    printf("digite a nota(0.0 a 10.0)\n");

    scanf("%f",&num);

    nota(num);
    return 0;
}
