#include <stdio.h>

int main(void){

    float nota;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    if(nota >= 7){
        printf("Aluno Aprovado.");
    } else{
        printf("Aluno Reprovado.");
    }

    return 0;
}