#include <stdio.h>

int main(){
    float idade, altura, peso, soma;
    float media;
    
    printf("Digite o valor da sua Idade: ");
    scanf("%f",&idade);

    printf("Digite o valor da sua Altura: ");
    scanf("%f",&altura);

    printf("Digite o valor de seu Peso: ");
    scanf("%f",&peso);

    soma = (idade + altura + peso);
    media = soma/3;
    printf("Minha soma e de %f", soma );
    
    printf(" e minha media e de %f", media );

    return 0;
}