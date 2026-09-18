#include <stdio.h>

int main(void){

    float nota, faltas;

    printf("Digite sua nota: ");
    scanf("%f", &nota);

    printf("Digite sua quantidade de faltas: ");
    scanf("%f", &faltas);

    if(nota >= 7 & faltas < 12){
        printf("Aluno Aprovado.");
    } else{
        printf("Aluno Reprovado.");
    }

    return 0;
}