#include <stdio.h>

int main(){
    int a;
    printf("Digite o valor de a: ");
    scanf("%d",&a);

    if(a%2!=1){
        printf("O valor e par");
    }else{
        printf("O valor e impar");

    }

    return 0;
}