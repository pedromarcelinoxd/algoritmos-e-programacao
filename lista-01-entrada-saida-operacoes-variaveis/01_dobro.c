#include <stdio.h>

int main()
{
    int num, dobro;
    printf("Digite um numero: ");
    scanf("%i", &num);
    dobro = num * 2;
    printf("O dobro de %i é %i\n", num, dobro);
    return 0;
}