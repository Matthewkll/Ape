#include <stdio.h>
int main(){
    int num = 0 < num < 15000000;
    int i;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for (i = 1; i < num + 1; i++)
    {
        if(num% i == 0){
            printf("Os divisores de %d sao: %d \n", num, i);
        }
        
    }
    return 0;
}