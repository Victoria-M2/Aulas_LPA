#include <stdio.h>

//criando um smartwatch ou algo assim

int main(void){

    int meta, passos, horas;
    int soma = 0;

    printf("Digite sua Meta de Passos: ");
    scanf("%d", &meta);

    //laço externo (1 ate 8 horas)
    for (horas=1; horas<=8; horas++){

        printf("Sua quantidade de passos nessa hora: ");
        scanf("%d", &passos);
        soma = soma + passos;
        
    }

    printf("Seu total de passos foi: %d\n",soma);

    if (soma >= meta)
    {
        printf("Sua meta de Passos foi atingida!");
    } else{
        printf("Sua meta de passos nao foi atingida");
    }
    
    

    return 0;
}
