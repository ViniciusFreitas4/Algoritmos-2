#include<stdio.h>
int elevado(int x,int z)
{
 int elv=1;
    for(int i=0;i<z;i++)
    {
        elv*=x;
    }
    printf("%d",elv);

}
int main()
{
    int x,z;

    printf("numero:\n");

    scanf("%d",&x);

    printf("elevado a:\n");

    scanf("%d",&z);

     elevado(x,z);
    return 0;
}
