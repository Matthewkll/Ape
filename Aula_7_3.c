#include <stdio.h>
int main(){
    float nota_a, nota_b;
    int resposta = 1;

do{
    printf("Entre com a nota a: ");
    scanf("%f",&nota_a);
    printf("Entre com o valor da nota b: ");
    scanf("%f", &nota_b);
    printf("Sua media e %f", (nota_a+nota_b)/2);
    printf("Deseja finalizar (0 - termina e 1 - continua): ");
    scanf("%d", &resposta);
}while (resposta == 1);

printf("Processo finalizado");
    return 0;


}