#include <stdio.h>

int main()
{
    float num1, num2, media;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    printf("A media dos dois numeros é %f\n", media);
    return 0;
}