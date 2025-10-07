#include <stdio.h>
#include <string.h>

int main(){
    char nome[10];
    char sobrenome[10];
    char completo[100];
    int tam;


    printf("\nDigite seu primeiro nome: ");
    scanf("%s", nome);

    printf("\nDigite seu sobrenome: ");
    scanf("%s", sobrenome);


    strcat(completo,nome); 
    strcat(completo," ");
    strcat(completo,sobrenome);
    
    
    printf("\n Seu primeiro nome e: %s", nome);
    printf("\n Seu sobrenome e: %s", sobrenome);
    printf("\n O tamanho do seu nome e: %d", strlen(completo));
    
    if (nome[0] == 'A' || nome[0] == 'a'){
        printf("\nO nome começa com A");
    } else{
        printf("Nao inicia com A");
    }
    
   
    printf("\nO seu nome completo e: %s", completo);



    return 0;
}
  