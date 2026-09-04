#include <stdio.h>

int main(void){
    int i = 0;

    printf("Numeros de 1 a 100 usando o comando while.\n");
    printf("Inicio\n");

    while (i<=100){
        printf("%d ,",i);
        //modo normal
        i = i + 2;
        //modo elegante
        //i++;

    }

    printf("\nFim");
    

    return 0;
}