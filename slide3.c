#include<stdio.h>
int main()
{
    int vetor[]={10,20,30};
    int *v[3];

    v[0]=vetor[0];
    v[1]=vetor[1];
    v[2]=vetor[2];

    printf("\nvetor[0]=%d",v[0]);
    printf("\nvetor[1]=%d",v[1]);
    printf("\nvetor[2]=%d",v[2]);

    return 0;
}
