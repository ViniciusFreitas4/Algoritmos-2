int print(int texto)
 {

    printf("oi");

   return printf;
 }

 void text(char texto[100])
 {

    printf("%s\n",texto);

 }

 char* confirm(char texto[100])
 {
     printf("%s\n",texto);

  return "ok\n";
 }

 int bhaskara1(float a,float b, float c)
 {
     float x1;
     float delta1;

    delta1=b*b-4*a*c;

    x1= (-b + sqrt(delta1))/(2*a);

    printf("%f\n",x1);


    return x1;
 }

 int bhaskara2(float a,float b, float c)
 {
     float x2;
     float delta2;

    delta2=b*b-4*a*c;


    x2= (-b - sqrt(delta2))/(2*a);

     printf("%f\n",x2);


    return x2;
 }

 void horas(int segundos)
{
   int horas= segundos/3600;
   int minutos=(segundos%3600)/60;
   int segundos_restantes=segundos%60;

    printf("%d hora,%d minuto,%d segundos\n",horas,minutos,segundos_restantes);

}
int anos_dia(int anos)
{
    return (2025-anos) * 365;
}

int meses_dia(int meses)
{
    return (4-meses) * 30;
}

int dia_dia(int dia)
{
    return (dia);
}

void dias_totais(int anos, int meses, int dia)
{
    int total_dias = anos_dia(anos) + meses_dia(meses) + dia_dia(dia);
    printf("A idade total em dias: %d\n", total_dias);
}

int perfeito(int numero)
{
    int soma_div=0;
    for (int i = 1; i < numero; i++)
        {
            if (numero % i == 0)
            {
            soma_div += i;
            }
        }

        if(soma_div==numero)
        {
            return 1;
        }
        else
        {
            return 0;
        }
}

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

    int number(int num)
{
    if(num<0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

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

void nota(float num)
{
    if(num>=0.0 && num<=4.9)
    {
        printf("D\n");
    }
    else if(num>=5.0 && num<=6.9)
    {
        printf("C\n");
    }
    else if(num>=7.0 && num<=8.9)
    {
        printf("B\n");
    }
    else if(num>=9.0 && num<=10.0)
    {
        printf("A\n");
    }
}

int crescente(int num[3])
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
        printf("%d\n",num[i]);
    }
}

void triangulo(int x, int y, int z)
{
    if(((abs(y-z)<x && x<y+z) && (abs(x-z)<y) && y<x+z) && (abs(x-y)<z) && (z<x+y))
    {
        if((x!=y)&&(x!=z)&&(y!=z))
        {
            printf("escaleno\n");
        }
        else if((x==y)&&(y!=z) || (y==z)&&(x!=z) || (x==z)&&(y!=z))
        {
            printf("isoceles\n");
        }
        else if((x==y) && (x==z))
        {
            printf("equilatero\n");
        }
    }

}

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

int elevado(int x,int z)
{
 int elv=1;
    for(int i=0;i<z;i++)
    {
        elv*=x;
    }
    printf("%d\n",elv);

}


