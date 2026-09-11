#include <stdio.h>

//criando uma tabuada aka meu INIMIGO pessoal.

int main(void){

    int i,j;

    //laço externo (1 ate 5)
    for (i=1; i<=5; i++){
        printf("------ Tabuada de %d ------\n", i);

        //laço interno: multiplica os valores de 1 ate 10
        for (j=1; j<=10; j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }

        //linha em branco para separar as tabuada.
        printf("\n");
        
    }
    

    return 0;
}