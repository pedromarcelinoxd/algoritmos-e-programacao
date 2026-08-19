#include <stdio.h>

int main()
{
    float nota_teoria, nota_pratica, nota_final;

    do
        { 
        printf("Digite a nota da prova teorica de 0 a 10 : ");
        scanf("%f", &nota_teoria);

        if (nota_teoria < 0 || nota_teoria > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }

    } while (nota_teoria < 0 || nota_teoria > 10);

    do
        {
        printf("Digite a nota da prova pratica de 0 a 10: ");
        scanf("%f", &nota_pratica);

        if (nota_pratica < 0 || nota_pratica > 10) {
            printf("Nota invalida. Digite um valor entre 0 e 10.\n");
        }
    
    } while (nota_pratica < 0 || nota_pratica > 10);    


    nota_final = (nota_teoria * 0.4) + (nota_pratica * 0.6);
    printf("A media ponderada é: %.2f\n", nota_final);
    return 0;
}