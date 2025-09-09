#include <stdio.h>
int main(){
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for ( int  i = 1; i <= 10; i++)
    {
        printf("A tabuada e: %d x %d= %d\n", numero, i, (numero * i));
    }
    return 0;
}