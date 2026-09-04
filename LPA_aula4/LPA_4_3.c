#include <stdio.h>

int main(void){
    float nota = 0;
    float soma = 0;
    float ct = 0;
    float media = 0;


    while(nota >= 0){
        //solicita a nota
        printf("Insira sua nota: ");
        scanf("%f",&nota);
        soma = soma + nota;
        ct = ct + 1;
    }

    //calcula a media
    media = soma/ct;
    
    printf("A media do aluno e: %.1f\n",media);

    return 0;
}