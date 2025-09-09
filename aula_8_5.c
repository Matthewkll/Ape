#include <stdio.h>
int main(){
  
  int i;
  int n;

  printf("Digite quantos numeros voce quer: ");
  scanf("%d", &n);
  
for (i = 0; i <= n; i++)
{
    if (n != i){
        printf("%d, ",i*2);
    }else{
        printf( "%d\n", i*2);

    }
}

for ( i = 0; i <= n; i++)
{
    if(n != i)
    {
        printf("%d, ", (i*2) + 1 );
    } else{ 
        printf("%d", (i*2) + 1);
    }
}
  return 0;
}
