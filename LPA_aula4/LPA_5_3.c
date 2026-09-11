#include <stdio.h>

//criando uma tabuada.

int main(void){

    int i,j;
    
    do{
        printf("Digite um valor para calcular a tabuada:\n");
        scanf("%d", &i);
        printf("------ Tabuada de %d ------\n", i);

        //laço interno: multiplica os valores de 1 ate 10
        for (j=1; j<=10; j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }

        //linha em branco para separar as tabuada.
        printf("\n");
        
    }while(i>0);
    
    return 0;
}