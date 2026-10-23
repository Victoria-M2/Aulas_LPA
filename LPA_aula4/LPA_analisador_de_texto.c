#include <stdio.h>
int main() {

    char frase[101];
    int opcao;
    int i;
    int tamanho;

    printf("Digite uma frase: ");
    fgets(frase, 101, stdin);
    
    do {
        printf("\n===== ANALISADOR DE TEXTO =====\n");
        printf("1 - Exibir a frase\n");
        printf("2 - Mostrar quantidade de caracteres\n");
        printf("3 - Contar letras\n");
        printf("4 - Contar espacos\n");
        printf("5 - Contar numeros\n");
        printf("6 - Contar vogais\n");
        printf("7 - Mostrar a frase invertida\n");
        printf("0 - Sair\n");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
            printf("\nFrase: %s\n", frase);
            break;

            case 2:
            tamanho = 0;
            while (frase[tamanho] != '\0') {
                tamanho++;
            }
            tamanho = tamanho - 1;

            printf("\nA quantidade de caracteres é: %d\n", tamanho);
            break;

            case 3:
            //
            break;

            case 4:
            //
            break;

            case 5:
            //
            break;

            case 6:
            //
            break;

            case 7:
            //
            break;

            case 0:
            printf("\nEncerrando o programa.... ... .. .\n");
            break;

            default :
            printf("\nOpção invalida! Tente novamente.\n");
        }
    } while (opcao != 0);    

    return 0;
}
