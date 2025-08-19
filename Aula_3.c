#include <stdio.h>

int main(){

    int idade; // Definição de variável
    printf("Digite a sua idade:");
    scanf("%d",&idade);// indica pro usuario o que deve ser feito.
    // Saida do valor

    printf("Sua idade e %d\n", idade);
    printf("Minha posicao de memoria e %d\n",&idade);
    return 0;

}