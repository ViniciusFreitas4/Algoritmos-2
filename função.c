#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"vinicius.h"
int main()
{
    int exc;

    while(1)
    {
        printf("digite o numero do exercicio:\n");

        scanf("%d",&exc);
        if(exc==0)
        {
            break;
        }

        if(exc==1)
        {

            int texto;

            print(texto);

        }
        if(exc==2)
        {
            char texto[100];

            printf("escreva um texto, limite 100 caracter:\n");

            scanf("%s",texto);

            text(texto);
        }
        if(exc==3)
        {
            char texto2[100];

            printf("ecreva texto ate 100 caracteres que retornarei ok:\n");

            scanf("%s",texto2);

            char* resposta=confirm(texto2);

            printf("%s",resposta);
        }
        if(exc==4)
        {
            float x1,x2,a,b,c;
            printf("bhaskara\n");
            printf("valor A:");
            scanf("%f",&a);
            printf("valor B:");
            scanf("%f",&b);
            printf("valor C:");
            scanf("%f",&c);

            bhaskara1(a,b,c);

            bhaskara2(a,b,c);
        }
        if(exc==5)
        {
            int segundos;

            printf("entre com a quantidade de segundos:");

            scanf("%d",&segundos);

            horas(segundos);

        }
        if(exc==6)
        {
             int anos, meses, dia;

            printf("Entre com a sua idade (em anos): ");
            scanf("%d", &anos);

            printf("Entre com o mes que voce nasceu (1-12): ");
            scanf("%d", &meses);

            printf("Entre com o dia que voce nasceu: ");
            scanf("%d", &dia);

            dias_totais(anos, meses, dia);
        }
        if(exc==7)
        {
            int numero;

            printf("digite um numero\n");

            scanf("%d",&numero);

            if(perfeito(numero))
            {
            printf("%d numero perfeito\n",numero);
            }
            else
            {
            printf("%d nao e numero perfeito\n",numero);
            }
        }
        if(exc==8)
        {
            int num;

            printf("entre com a idade (anos>5)");

            scanf("%d",&num);

            idade(num);
        }
        if(exc==9)
        {
            int num;

            printf("digite um numero\n");

            scanf("%d",&num);

            if(num<0)
            {
            printf("%d negativo\n",num);
            }
            else
            {
            printf("%d positivo\n",num);
            }
        }

        if(exc==10)
        {
            int num;

            printf("digite um numero\n");

            scanf("%d",&num);

            if(num%2==0)
            {
            printf("%d par\n",num);
            }
            else
            {
            printf("%d impar\n",num);
            }
        }

        if(exc==11)
        {
            float num;

            printf("digite a nota(0.0 a 10.0)\n");

            scanf("%f",&num);

            nota(num);

        }

        if(exc==12)
        {
             int num[3];

            for(int i=0;i<3;i++)
            {
            printf("digite o n(%d)\n",i+1);
            scanf("%d",&num[i]);
            }

            crescente(num);
        }

        if(exc==13)
        {
             int x,y,z;

            printf("lado x\n");

            scanf("%d",&x);

            printf("lado y\n");

            scanf("%d",&y);

            printf("lado z\n");

            scanf("%d",&z);

            triangulo(x,y,z);
        }

        if(exc==14)
        {
             cal_med();
        }

        if(exc==15)
        {
            int x,z;

            printf("numero:\n");

            scanf("%d",&x);

            printf("elevado a:\n");

            scanf("%d",&z);

            elevado(x,z);
        }

    }
    return 0;
}

