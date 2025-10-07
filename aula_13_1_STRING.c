#include <stdio.h>
#include <string.h>

int main(){
    char primeiro_nome[30];
    char segundo_nome[30];
    printf("Digite o primeiro nome: \n");
    scanf("%s", primeiro_nome);
    //fgets(primeiro_nome, sizeof(primeiro_nome),stdin);//
    printf("Digite o segundo nome: \n");
    scanf("%s", segundo_nome);

    printf("\nO primeiro nome digitado foi %s", primeiro_nome);
    printf("\nO segundo nome digitado foi %s", segundo_nome);



   return 0; 
}
