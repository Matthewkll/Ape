#include <stdio.h>

int main(){
    int valor_a;
    int valor_b;
    int valor_c;

    printf("Digite o valor do lado a: ");
    scanf("%d", &valor_a);

    printf("Digite o valor do lado b: ");
    scanf("%d",&valor_b);

    printf("Digite o valor do lado c: ");
    scanf("%d",&valor_c);

    if(valor_a == valor_b == valor_c){
        printf("Este um triangulo Equilatero!");
    } else if ( valor_a != valor_b != valor_c){
        printf( "Este e um triangulo Escaleno" );
    } else {
        printf("Este e um triangulo Isosceles");
    }
    return 0;
}