#include <stdio.h>
#include <locale.h>
typedef struct 

{   char nome[100];
    int ano_nacimento;
    char sexo;
    double altura;
    double peso;
    double cpf;

}Pessoa;


int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");
    Pessoa p1 = {" Matheus Colle", 2002,'M',1.72,81.0,12333322323};
    printf("\nO nome da pessoa e %s", p1.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p1.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p1.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p1.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p1.peso);
    printf("\n O cpf dessa pessoa e %f", p1.cpf);


    Pessoa p2 = {" Pedro Alvarez", 2012,'M',1.42,46.0,12223322323};
    printf("\nO nome da pessoa e %s", p2.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p2.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p2.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p2.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p2.peso);
    printf("\n O cpf dessa pessoa e %f", p2.cpf);

    Pessoa p3 = {" Sergio Silva", 1999,'M',1.42,150.0,50333652323};
    printf("\nO nome da pessoa e %s", p3.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p3.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p3.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p3.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p3.peso);
    printf("\n O cpf dessa pessoa e %f", p3.cpf);

    Pessoa p4 = {" Maria Fernanda", 1914,'F',1.92,151.0,07070722323};
    printf("\nO nome da pessoa e %s", p4.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p4.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p4.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p4.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p4.peso);
    printf("\n O cpf dessa pessoa e %f", p4.cpf);

    Pessoa p5 = {" Kamilla Freitas", 2008,'F',1.65,48.0,04452512323};
    printf("\nO nome da pessoa e %s", p5.nome);
    printf("\nO ano de nascimento dessa pessoa e: %d", p5.ano_nacimento);
    printf("\n O sexo dessa pessao e %c", p5.sexo);
    printf("\n A altura dessa pessoa e : %0.1f", p5.altura);
    printf("\n O peso dessa pessoa e: %0.1f", p5.peso);
    printf("\n O cpf dessa pessoa e %f", p5.cpf);







    return 0;
}