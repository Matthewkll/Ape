#include <stdio.h>
#define TAM 3
int main(){
    int valores [TAM];
    int uso_memoria;
    int tamano_vetor;
    /* valores[0]=4;
    valores[1]=7;
    valores [2]=3;
    valores[3]=1; */

    printf("O\nOla o sistema vai pedir 4 valores: ");
    for(int i=0; i<TAM; i++){
        printf("\nInsira um valor: ");
        scanf("%d",&valores[i]);

    }
    printf("\nOs valores armazendos sao: ");
        for (int  i = 0; i < TAM; i++)
        {
            printf("%d ", valores [i]);
        }

    printf("\nOs valores armazendos sao: ");
        for (int  i = TAM - 1; i > -1; i--)
        {
            printf("%d ", valores [i]);
        }
    uso_memoria = sizeof(valores);
    tamano_vetor = sizeof(valores)/sizeof(valores[0]);
    printf("\n%d Tamanho de espaco de memoria em  bytes: ",sizeof(valores));
    printf("\n%d Numero de elementos ",sizeof(valores)/sizeof(valores[0]));
    printf("\nFim do programa! ");
    return 0;
    
}