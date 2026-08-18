#include <stdio.h>

int main()
{
    float metro, centimetro;
    printf("Digite o valor em metros: ");
    scanf("%f", &metro);
    centimetro = metro * 100;
    printf("O valor em centimetros é %f\n", centimetro);
    return 0;
}