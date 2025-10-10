#include <stdio.h>
#include <string.h>
void toUpperFrase (char txt[]){
    for (int i = 0; txt[i] !='\0'; i++)
    {
        txt[i] = toupper((unsigned char)txt[i]);
    
}
}
int main(){
    char frase[100];

    printf("Digite uma frase: ");
    fgets(frase,sizeof(frase), stdin);

    printf("Minha frase original: %s\n", frase);

    for (int i = 0; frase[i] != '\0'; i++){
       frase[i] = toupper((unsigned char)frase[i]);
       
    }
    printf("Minha frase em caixa alta: %s\n", frase);


    printf("Digite uma outra frase: ");
    fgets(frase,sizeof(frase), stdin);

    for (int i = 0; frase[i] != '\0'; i++){
       frase[i] = toupper((unsigned char)frase[i]);
       
    }
    printf("Minha outra frase em caixa alta: %s\n", frase);
    return 0;


}