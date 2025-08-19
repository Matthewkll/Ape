#include <stdio.h>

int main(){
    int idade;
    int altura;
    int peso;
    int soma;
    
    printf("Digite o valor da sua Idade: ");
    scanf("%d",&idade);

    printf("Digite o valor da sua Altura: ");
    scanf("%d",&altura);

    printf("Digite o valor de seu Peso: ");
    scanf("%d",&peso);

    soma = idade + altura + peso;
    printf("Minha soma e %d", soma );
    return 0;
}