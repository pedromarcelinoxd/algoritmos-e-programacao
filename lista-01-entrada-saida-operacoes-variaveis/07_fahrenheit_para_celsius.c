#include <stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Digite a temperatura em fahrenheit: ");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) / 1.8;
    printf("A temperatura em Celsius é %f\n", celsius);
    return 0;
}