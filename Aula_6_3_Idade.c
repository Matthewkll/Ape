#include <stdio.h>

int main(){
    int idade;
    int categoria;
    int resultado;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    printf("Qual a categoria?(1 atleta, 2 amador, 3 profissional): ");
    scanf("%d", &idade);


    if ( idade > 120){
        printf("Valor invalido");
    } else if( idade <= 12 ){
        printf("Infantil ");
    } else if( idade <= 17 ){
        printf("Juvenil ");
    } else if (idade <= 59){
        printf("Adulto ");
    } else if( idade >= 60 ){
        printf("Senior");
    }

    if (categoria = 1){
        printf("Atleta");
    } else if( categoria = 2){
        printf("Amador");
    } else if ( categoria = 3){
        printf("Profissional");
    } else if ( categoria >= 4){
        printf("Invalido");
    }

    resultado = "%d",&idade && "%d", categoria;
    printf("Sua categoria é: %d"  );
    return 0;
}
    
    
    
    
    