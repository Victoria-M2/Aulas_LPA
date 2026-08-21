#include <stdio.h>

int main(void){
    int nota_1;
    int nota_2;
    int media;
    int r;

    nota_1 = 9;
    nota_2 = 1;
    media = (nota_1 + nota_2) / 2;
    
    
    r = 10%2;

    printf("Minha media e: %d\n",media);
    printf("Resultado: %d\n",r);
    return 0;

}