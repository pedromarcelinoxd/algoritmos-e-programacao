#include <stdio.h>

int main()
{
    int idade, dias;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("Você tem aproximadamente %d dias de vida\n", dias);
    return 0;
}