#include<stdio.h>
#include<stdlib.h>
void cal_med()
{
    float valor,soma=0;
    int contador=0;

    while(1)
    {
        printf("digite um numero negativo ou zero para parar");

        scanf("%f",&valor);

        if(valor<=0)
        {
            break;
        }
        soma+=valor;
        contador++;
    }
    if(contador==0)
    {
        printf("nenhum valor valido");
    }
    else
    {
        float media=soma/contador;
        printf("A media aritmetica dos valores informados e: %.2f\n", media);
    }

}
int main()
{
    cal_med();

    return 0;
}
