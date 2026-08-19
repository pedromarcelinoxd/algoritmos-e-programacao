#include <stdio.h>

int main()
{
    float valor_dia, dias, salario_sdesconto, salario_cdesconto;
    printf("Digite a quantidade de dias trabalhados: ");
    scanf("%f", &dias);
    valor_dia = 35.00;
    salario_sdesconto = dias * valor_dia;
    salario_cdesconto = salario_sdesconto - (salario_sdesconto * 0.08);

    printf("O valor do encanador a ser recebido é de R$ %.2f\n", salario_cdesconto);

    return 0;
}