#include <stdio.h>


int main(){
    float valor_a, valor_b, valor_c;
    float media;
    int contador = 1;
    while (contador == 1)
    {
    // Meu codigo de media
    printf("Digite tres valores: ");
    scanf("%f %f %f", &valor_a, &valor_b, &valor_c);

    media = ( valor_a+valor_b+valor_c)/3;
    printf("Sua media e: %f\n", media);

    contador = contador + 1; 

    printf("Digite zero para terminnar e 1 parar continuar: \n");
    scanf("%d", &contador);
    }
    // o loop termina quando a condição for 0

    printf("\nfim do programa!\n");
    return 0;
}