#include <stdio.h>

int main() {
    float valores[12], soma = 0, media;
    
    for (int i = 0; i < 12; i++) {
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &valores[i]);
    }
   
    printf("Os valores inseridos foram:\n");
    for (int i = 0; i < 12; i++) {
        printf("%f ", valores[i]);
       soma += valores[12];
        media = soma / 12;
    }
     
    printf("A media e: %f\n", media);
    return 0;
}
