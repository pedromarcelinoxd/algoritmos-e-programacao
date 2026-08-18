#include <stdio.h>

int main()
{
    float raio, perimetro;
    printf("Digite o raio da circuferencia: ");
    scanf("%f", &raio);
    perimetro = 2 * 3.14 * raio;
    printf("O perimetro da circuferencia é %f\n", perimetro);
    return 0;
}