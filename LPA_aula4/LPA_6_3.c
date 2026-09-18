#include <stdio.h>

int main(void){

    float nota1, nota2, nota3, faltas, media;

    printf("Insira sua primeira nota: ");
    scanf("%f", &nota1);

    printf("Insira sua segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite sua quantidade de faltas: ");
    scanf("%f", &faltas);

    media = (nota1 + nota2 + nota3)/3;

    printf("Sua media e: %.1f\n",media);


    if(media >= 7 & faltas < 12){

        printf("Aluno Aprovado.");

    } else{

        printf("Aluno Reprovado.");

    }

    return 0;
}