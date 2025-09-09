/* for(inicialização, condição, incremento){
} 
inicialização -> gerealmente define a variavel de controle(ex: int i = 0;)
condição ->  o laço roda enquanto for verdadeira( ex: i <= 10)
incremento => atualização do contador a cada iteração(ex: i ++)
  */

#include <stdio.h>
int main(){
    //int i;
    
for (int contador=0; contador<=10; contador++){
    printf("O valor da contagem e %d\n", contador);

}
return 0;
}

