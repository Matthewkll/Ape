#include <stdio.h>
#define NOTA 5

int main(){
    float notas[NOTA];
    int soma, media;
    
    printf("\nOla! O sistema vai pedir 5 notas de alunos.");
    for (int i = 0; i < NOTA; i++)
    {
        printf("\nInsira um valor: ");
        scanf("%f", &notas[i]);
    }
    printf("\nAs notas armazenadas sao: ");
    for(int i=0; i<NOTA; i++){
        printf("%0.2f", &notas[i]);
        soma+= notas[i];
    }

    media= soma/NOTA;
    printf("\na MEDIA E: %0.2f", media);
    
    
    printf("\nFim do programa");
    


return 0;

}