#include <stdio.h>
int main(){

    int contator = 0;
    while (contator <= 10);

    {
        printf("Sala %d\n",  (2* contator) + 1);
        //contator++ ;
         // ou pode colocar contador = contador + 2
         contator = contator + 1;
        
        
    }
    return 0;   
}