#include <stdio.h>

int main(){
    float valor_a,valor_b;
    float resultado;
    char operacao;

    printf("Digite o valore de a: ");
    scanf("%f",&valor_a);
    printf("Digite o valore de b: ");
    scanf("%f",&valor_b);

    printf("[s]Soma | [u]Subtracao | [m] Multipicacao | [d]Divisao\n");
    printf("Digite operacao: ");
    scanf("%s", &operacao);
    //CALCULO DE OPERAÇÕES
    if (operacao == 's' || operacao == 'S' ){
        resultado = valor_a + valor_a;
    } else if (operacao == 'u' || operacao == 'U'){
    resultado = valor_a - valor_b;
    }else if (operacao == 'm' || operacao == 'M'){
        resultado = valor_a * valor_b;
    } else if (operacao == 'd' || operacao == 'D'){
        resultado = valor_a / valor_b;
    }
    // Saida de valores
    printf ("Meu resultado e %f", resultado);
return 0;
}
