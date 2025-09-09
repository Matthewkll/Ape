#include <stdio.h>

int main(){
    int idade;
    do{
        printf("\nDigite sua idade: ");
        scanf("%d",&idade);
        if(idade<0 || idade >120){
            printf("Idade invalida. Digite Novamente\n");
        }

    } while (idade <0 || idade > 120);
    printf("Idade Valida, fim de programa.");
    return 0;

}