#include <stdio.h>

int main(){
    int valor_a;
    int multi = 0;
    

    printf("Qual o numero a ser inserido?: ");
    scanf("%d", &valor_a);

    while( multi <= 9){
        
        multi = multi + 1;
        

        printf("O resultado e %d \n", (multi * valor_a));

    }

return 0; 
}