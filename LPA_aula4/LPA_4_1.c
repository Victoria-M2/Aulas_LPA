#include <stdio.h>

int main(void){
    float nota1, nota2, nota3, media;

    //solicita a primeira nota
    printf("digite a primeira nota: ");
    scanf("%f",&nota1);

    //solicita a segunda nota
    printf("digite a segunda nota: ");
    scanf("%f",&nota2);

    //solicita a terceira nota
    printf("digite a terceira nota: ");
    scanf("%f",&nota3);

    //calcula a media
    media = (nota1 + nota2 + nota3)/3;

    //exibe o resultado da media
    printf("A media do aluno e: %.2f\n",media);

    return 0;

}