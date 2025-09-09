#include <stdio.h>
int main (){
    int contador = 0;
    int valor;
    //Entrada
    printf("\nEntre comum numero: ");
    scanf("%d", &valor);
    // processamento e saida
    printf("Tabuada de %d\n", valor);
    while (contador<=10)
    {
        printf("%d x %d = %d\n", valor, contador, valor * contador);
        // contador = contador + 1;
        contador++;

    }
    return 0;
}