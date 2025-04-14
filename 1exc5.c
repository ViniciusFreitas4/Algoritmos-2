#include<stdio.h>
void horas(int segundos)
{
   int horas= segundos/3600;
   int minutos=(segundos%3600)/60;
   int segundos_restantes=segundos%60;

    printf("%d hora,%d minuto,%d segundos",horas,minutos,segundos_restantes);

}
int main()
{
    int segundos;

    printf("entre com a quantidade de segundos:");

    scanf("%d",&segundos);

    horas(segundos);


    return 0;
}
