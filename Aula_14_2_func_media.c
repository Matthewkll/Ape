#include <stdio.h>
#include <string.h>
/*float calculoMedia (float v1, float v2){
    //return (a+b+c)/3;//
    return (v1^2 + v2^2)/3;
}
*/
float pitagoras(float v1, float v2){
    return sqrt(pow(v1,2) + pow(v2,2));
}
int main(){
    float a,b,c;
    //float media;//
    

    printf("Digite o valor de a: ");
    scanf("%f",&a);
    printf("Digite o valor b: ");
    scanf("%f", &b);
    //printf("Digite o valor de c: ");//
    //scanf("%f",&v3);//

   // media = calculoMedia(a+b+c);//

    
    c = pitagoras(a,b);
    printf("Minha media: %f\n", c);
    return 0;
}