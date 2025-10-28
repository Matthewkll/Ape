#include <stdio.h>
#include <locale.h>
int dobrarValoraSemRetorno(int n){
    n = n * 2;
    printf("Dentro da funcao : %d\n", n);
}

int dobrarValoraComRetorno(int n){
    n = n * 2;
    //printf("Dentro da funcao : %d\n", n);

return n;

}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");

    int x = 5;
    dobrarValoraSemRetorno(x);
    printf("Fora da funcao : %d\n",x);
    printf("Valor retornado da função é %d", dobrarValoraComRetorno);
    return 0;

}
