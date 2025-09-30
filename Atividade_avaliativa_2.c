#include <stdio.h>
int main(){

    int salario;
    float aumento;
    float soma;
    float total;


    
    printf("Digite seu salario: ");
    scanf("%d", &salario);
   

    if (salario<= 280){
        aumento = 0.20;

    }else if(salario > 280 && salario < 700){
        aumento = 0.15;
    }else if ( salario > 700 && salario < 1500){
        aumento = 0.10;
    }else if(salario > 1500){
            aumento = 0.05;
        }

    soma=(salario*aumento);
    total=(salario*aumento)+salario;

    printf("\nO valor do seu salario antes era de %d", salario);
    printf("\nO valor do percentual do aumento e de %f", aumento);
    printf("\nO valor do aumento e de %f", soma);
    printf("\nO valor do novo salario e de %.0f", total);

    return 0;
}
    

    

