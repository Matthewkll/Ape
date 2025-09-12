#include <stdio.h>
int main(){

    int num ;
    int resultado = 12; 

    printf("Digite o numero escolhido: ");
    scanf("%d", &num);
    resultado = (num);

     while( resultado != 12){
        
       if ( num > 12 && num <= 20){
            printf(" Esta perto! Voce passou do resultado. tente novamente: ");
             scanf("%d", &num);
        }else if (num > 12 && num > 20 ){
        printf("Voce esta bem longe! Seu valor esta muito acima do numero. Tente novamente: ");
         scanf("%d", &num);
        } else if (num < 12 && num >= 1){
            printf("Esta perto! Seu valor esta abaixo do numero. Tente novamente: ");
             scanf("%d", &num);
        } else if( num < 1){
            printf("Seu numero esta bem abaixo do valor. Tente novamante: ");
             scanf("%d", &num);
        } else{
            break;
        }
    
    } 
    
    
    printf("VOCE ACERTOU! PARABENS");
    
    return 0;
}
