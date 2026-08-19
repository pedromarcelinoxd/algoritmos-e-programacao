#include <stdio.h>

int main()
{
    float km, litros, consumo;
    printf("Digite a quantidade de km percorridos: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);
    consumo = km / litros;
    printf("O consumo medio do veiculo é de %.2f km/l\n", consumo);
    return 0;
}