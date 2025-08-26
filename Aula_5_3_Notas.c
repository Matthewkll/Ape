#include <stdio.h>

int main(){
    int Nota;
    int Falta;
    int aprovado;
    printf("Qual a sua nota: ");
    scanf("%d",&Nota);
    printf("Quantas faltas o bostinha tem: ");
    scanf("%d",&Falta);

  if(Nota >= 9 && Falta <= 20){
        printf("Voce esta aprovado");
    }else if( Nota>= 7 && Falta <= 15){
        printf("Foi quase otario, mas tu passou");
    } else if(Nota >= 5 < 7 && Falta < 15) {
        printf("HAHAHAHA, RE-CU-PE-RA-CAO! babaca");
    }else if( Nota < 5){
        printf("Quem passa direto e trem, tu reprova mesmo.");
    }else{
        printf("Quem passa direto e trem, tu reprova mesmo.");
    }
    
    return 0;
}
