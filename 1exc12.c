#include<stdio.h>
int numero(int num[3])
{
    int maior=0;

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            if(num[j]>num[j+1])
            {
                maior=num[j];
                num[j]=num[j+1];
                num[j+1]=maior;
            }
        }

    }
    for(int i=0;i<3;i++)
    {
        printf("%d",num[i]);
    }
}
int main()
{
    int num[3];

    for(int i=0;i<3;i++)
    {
     printf("digite o n(%d)\n",i+1);
     scanf("%d",&num[i]);
    }

         numero(num);

    return 0;
}
