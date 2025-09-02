#include <stdio.h>

int main(){

    float numero;
    float soma = 0;
    float total = 0;

    printf("\nEntre com um numero: ");
    scanf("%f",&numero);
    
    while (numero > 0 )
    {
    
    // total = total + 1
    // total++;
    soma= soma + numero;
    total = total + 1;
    

    printf("\nEntre com um numero: ");
    scanf("%f",&numero);

    }
    // processamento
    if(total== 0){
        printf("Nao foi encontrado nenhum numero");
    }else{
        if(total == 1){
            printf("\nFoi inserido %.0f numero", total);
        }else{
            printf("\nForam inseridos %.0f numero", total);
            printf("\nA media dos numeros entrados e: %f", soma/total);
        }
        
    }
    return 0;
}