#include <stdio.h>


int main(){
    float valor_a, valor_b, valor_c;
    float media;
    int contador = 1;
    while (contador <= 3)
    {
    // Meu codigo de media
    printf("Digite tres valores: ");
    scanf("%f %f %f", &valor_a, &valor_b, &valor_c);

    media = ( valor_a+valor_b+valor_c)/3;
    printf("Sua media e: %f\n", media);

    contador = contador + 1; 


    }
    printf("\nfim do programa!\n");
    return 0;
}