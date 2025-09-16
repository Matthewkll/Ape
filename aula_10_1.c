#include <stdio.h>

int main(){

    int num;

    do
    {
        printf("Digite numeros inteiros: ");
        scanf("%d", &num);
        if (num == 0)
        {
            break;
        }
        

    } while (num != 0);
    printf("programa finalizado!");
    return 0;
        
}
    