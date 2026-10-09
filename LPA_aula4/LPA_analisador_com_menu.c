#include <stdio.h>
int main()
{
    int num[10];
    int soma, media, menu;
    int n_par = 0;
    int n_impar = 0;
    

    printf("digite 10 numeros aqui: ");
    scanf("%d", &num[0]);
    scanf("%d", &num[1]);
    scanf("%d", &num[2]);
    scanf("%d", &num[3]);
    scanf("%d", &num[4]);
    scanf("%d", &num[5]);
    scanf("%d", &num[6]);
    scanf("%d", &num[7]);
    scanf("%d", &num[8]);
    scanf("%d", &num[9]);

    int maior = 0;
    int menor = num[0];

    printf("Menu de opções.\n1- Exibir os números.\n2- Analisar os números.\n3- Pesquisar um número.\n4- Exibir apenas os números pares.\n5- Exibir apenas os números ímpares.\n6- Encerrar o programa.\n");
    scanf("%d", &menu);


    switch (menu){

        case 1:
        for(int i = 0; i < 10; i++){
            printf("%d, ", num[i]);
        }
        break;



        case 2:
        for(int i = 0; i < 10; i++){
            if (num[i] > maior){
                maior = num[i];
            }
        }
        printf("O maior numero é: %d\n", maior);


        for(int i = 0; i < 10; i++){
            if (num[i] < menor){
                menor = num[i];
            }
        }
        printf("O menor numero é: %d\n", menor);


        for(int i = 0; i < 10; i++){
            if (num[i] % 2 == 0){
                n_par++;
            }
        }
        printf("A quantidade de numeros pares é: %d\n", n_par);


        for(int i = 0; i < 10; i++){
            if (num[i] % 2 != 0){
                n_impar++;
            }
        }
        printf("A quantidade de numeros impares é: %d\n", n_impar);


        for(int i = 0; i < 10; i++){
            soma = num[i] + soma;
        }
        break;



        case 3:
        
        break;



        case 4:
        for(int i = 0; i < 10; i++){
            if (num[i] % 2 == 0){
                printf("%d, ", num[i]);
            }
        }
        break;



        case 5:
        for(int i = 0; i < 10; i++){
            if (num[i] % 2 != 0){
                printf("%d, ", num[i]);
            }
        }
        break;



        default :
        return 0;
    }



    return 0;
}
