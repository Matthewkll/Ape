#include <stdio.h>
#include <locale.h>

 
 
 int fatorialSemRecursao(int n){
   int resultado = 1;
   if (n < 0)
   {
    return - 1;
   }else{
 for (int i = 1; i <= n; i++)
        {
           resultado *= i;
        }
        

    
   
    return resultado; 
 }
 }

int fatorialComRecursao(int n){
    if (n< 0)
    {
        return - 1;
    }else{
    
    if (n == 0 || n ==1 )
    {
        return 1;
    } else{
        return n * fatorialComRecursao(n - 1);
    }
    
}
}

int main(){
    system("chcp 65001 > nul");
    setlocale(LC_ALL,"pt_BR.UTF-8");
    int numero;
   
    printf("Digite um numero para calcular o fatorial: \n");
    scanf("%d", &numero);

    printf("O número digitado foi: %d", numero);

    printf("O resultado do fatorial desse numeroo é: %d\n ", fatorialSemRecursao(numero));
    
    return 0;
    }