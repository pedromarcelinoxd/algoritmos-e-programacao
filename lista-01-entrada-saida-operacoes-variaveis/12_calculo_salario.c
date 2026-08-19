#include <stdio.h>

int main()
{
    float salario, horas_normais, horas_extras, valor_hora, valor_extra;
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%f", &horas_normais);
    printf("Digite a quantidade de horas extras trabalhadas: ");
    scanf("%f", &horas_extras);
    valor_hora = 10.00;
    valor_extra = 15.00;
    salario = (horas_normais * valor_hora) + (horas_extras * valor_extra);
    printf("O salario total do funcionario é de R$ %.2f\n", salario);
    return 0;
}