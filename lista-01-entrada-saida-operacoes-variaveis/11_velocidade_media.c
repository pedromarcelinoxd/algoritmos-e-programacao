#include <stdio.h>

int main()
{
    float delta_t, delta_s, velocidade_media;
    printf("Digite a distancia percorrida em km: ");
    scanf("%f", &delta_s);
    printf("Digite o tempo gasto em horas: ");
    scanf("%f", &delta_t);
    velocidade_media = delta_s / delta_t;
    printf("A velocidade media do veiculo é de %.2f km/h\n", velocidade_media);
    return 0;
}