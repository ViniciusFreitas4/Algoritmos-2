#include<stdio.h>
int main()
{
    int vetor[]={10,20,30};
    int *pa;
    pa=vetor;

    printf("\nvalores inicias vetor[0]=%d,vetor[1]=%d,vetor[3]=%d\n",vetor[0],vetor[1],vetor[2]);



    *pa++;//aponta para o proximo valor
    printf("valor inicial %d aponta para %d",vetor[0],*pa);



     (*pa)++;//aumenta o valor
     printf("\naumenta para %d",*pa);

        *(pa++);//acessa vetor[1] e depois incrementa o ponteiro vai para vet[2]
        printf("\napos '*(pa++)' aponta para %d",vetor[1],*pa);


    return 0;
}
