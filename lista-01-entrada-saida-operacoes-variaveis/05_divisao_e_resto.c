#include <stdio.h>

int main()
{
    int num1, num2, divisao, resto;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    divisao = num1 / num2;
    resto = num1 % num2;
    printf("A divisao de %d por %d é %d e o resto é %d\n", num1, num2, divisao, resto);
    return 0;
}