#include <stdio.h>
int main(){

    int peso;
    int reais;
    int exd; 

    printf("Quanto pesa o peixe: ");
    scanf("%d", &peso);

    exd = (peso-50)*4;

    if (peso <= 50)
    {
        printf("O peixe pesa %d quilos e nao tem nenhuma multa!", peso);
    }else if( peso > 50){
        printf(" O peixe pesa %d quilos e valor da multa e de %d reais", peso, exd);
    }
    return 0;

    }
    
