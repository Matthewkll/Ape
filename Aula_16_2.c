#include <stdio.h>
#include <locale.h>



int fib(int n){
    if(n == 0) return 0;
    if(n==1) return 1;
    return fib(n - 1) + fib(n - 2);

}

int main(void){
system("chcp 65001 > nul");
setlocale(LC_ALL,"pt_BR.UTF-8");

    int numero;
    printf("Digite um numero pra calcular o fibonacci: ");
    scanf("%d", &numero);
    printf("Fibonacci é %d\n", fib(numero));

    return 0;
}