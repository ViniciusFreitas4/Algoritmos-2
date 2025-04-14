#include <stdio.h>

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
    return (1-dia);
}

void dias_totais(int anos, int meses, int dia)
{
    int total_dias = anos_dia(anos) + meses_dia(meses) + dia_dia(dia);
    printf("A idade total em dias: %d\n", total_dias);
}

int main()
{
    int anos, meses, dia;

    printf("Entre com a sua idade (em anos): ");
    scanf("%d", &anos);

    printf("Entre com o mes que voce nasceu (1-12): ");
    scanf("%d", &meses);

    printf("Entre com o dia que voce nasceu: ");
    scanf("%d", &dia);

    dias_totais(anos, meses, dia);

    return 0;
}
