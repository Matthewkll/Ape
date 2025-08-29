#include <stdio.h>

int main(){
    float nota_a;
    float nota_b;
    float nota_c;
    float falta;
    float media;
     
    printf("Digite sua nota em Ciencias Humanas: ");
    scanf("%f",&nota_a);

    printf("Digite sua nota em Ciencias Exatas: ");
    scanf("%f",&nota_b);

    printf("Digite sua nota de Redacao: ");
    scanf("%f",&nota_c);

    media = (nota_a + nota_b + nota_c)/3;
     
    printf("Minha media dos valores e de %f", media);

    printf(" Quantas faltas voce tem: ");
    scanf("%f", &falta);

    if ( media == 0 && falta > 18){
        printf("SR!");
    } else if (falta > 18){
        printf("Reprovado por faltas!");
    }else if( media >= 9  ){
            printf("SS!");
    }else if( media >= 7 ){
            printf("MS!");
    }else if( media >= 5 ){
            printf ("MM!");
    }else if( media >= 3 ){
            printf("MI");
    }else if( media >= 1){
            printf("II!");
    }
        
    return 0;

}