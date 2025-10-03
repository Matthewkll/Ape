#include <stdio.h>

int main(){

    char nome_1[5];
    char nome_2[5];
        printf("Digite o primeiro nome: \n");
        scanf("%s",nome_1);

        printf("Digite o segundo nome: \n");
        scanf("%s", nome_2);

        printf("\nO nome digitado foi %s", nome_1);
        printf("\nO nome digitado foi %s", nome_2);
        printf("\nO nome completo e %s %s", nome_1, nome_2);

    return 0;
}