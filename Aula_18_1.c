#include <stdio.h>
typedef struct 
{   char nome[100];
    int ano_nacimento;
    char sexo;
    double altura;
    double peso;
    double cpf;

}Pessoa;


int main(){
    Pessoa p1 = {" Matheus Colle", 2002,'M',1.72,81.0,12333322323};
    printf("\nO nome da pessoa e %s", p1.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p1.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p1.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p1.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p1.peso);
    printf("\n O cpf dessa pessoa e %f", p1.cpf);


    /*char nome[100][4];
    int ano_nacimento[4];
    char sexo[4];
    double altura[4];
    double peso [4];
    int cpf[4];*/

    /*cpf[0] = 61020974168;
    cpf[1] = 98820974168;
    peso [0] = 92.01;
    peso [1] = 74.4;*/

    return 0;


}