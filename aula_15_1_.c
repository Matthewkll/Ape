#include <stdio.h>
int main(){
    int x = 10, y=20, z = 30;
    int *p, *p2, *p3;

    p = &x; // p recebe o endereço de x //
    p2 = &y;
    p3 = &z;
    printf("Valor de x; %d\n", x);
    printf("Enereco de x : %p\n", &x);
    printf("Valor armazenado em p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);
    printf("Tamanho do int %d\n", sizeof(x));
    

    printf("Valor de y; %d\n", y);
    printf("Enereco de y : %p\n", &y);
    printf("Valor armazenado em p2: %p\n", p2);
    printf("Valor apontado por p2: %d\n", *p2);

    printf("Valor de z; %d\n", z);
    printf("Enereco de z: %p\n", &z);
    printf("Valor armazenado em p3: %p\n", p3);
    printf("Valor apontado por p3: %d\n", *p3);


    return 0;

}