#include <stdio.h>
#include <locale.h>

int potencia( int base, int exp){
    if (exp == 0)
        return 1;
    else
        return base * potencia(base, exp - 1);
}

int main(void){
system("chcp 65001 > nul");
setlocale(LC_ALL,"pt_BR.UTF-8");


int n ;
int exp;
int resul;


    printf("Digite o valor da base: ");
    scanf("%d", &n);

    printf("\nDigite o valor do expoente: ");
    scanf("%d", &exp);


    resul = potencia(n, exp);
    printf("\nO resultado foi %d", resul);

    return  0;
}