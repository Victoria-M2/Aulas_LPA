#include <stdio.h>
int main() {

    char frase[101];
    int opcao;
    int i;
    int tamanho;
    int letras;
    int espacos;

    printf("Digite uma frase: ");
    fgets(frase, sizeof(frase), stdin);
    
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
        printf("\nEscolha uma opcao: \n");
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
            letras = 0;
            i = 0;

            while (frase[i] != '\0') {
                if(frase[i] >= 'a' && frase[i] <= 'z' ){
                    letras++;
                    }

                i++;
            }

            printf("\nA quantidade de letras é: %d\n", letras);
            break;



            case 4:
            i = 0;
            espacos = 0;

            while (frase[i] != '\0') {
                if(frase[i] == ' '){
                    espacos++;
                    }

                i++;
            }

            printf("\nA quantidade de espaços é: %d\n", espacos);
            break;



            case 5:
            letras = 0;
            i = 0;

            while (frase[i] != '\0') {
                if(frase[i] >= '0' && frase[i] <= '9' ){
                    letras++;
                    }

                i++;
            }

            printf("\nA quantidade de numeros é: %d\n", letras);
            break;



            case 6:
            letras = 0;
            i = 0;

            while (frase[i] != '\0') {
                if(frase[i] == 'a' || frase[i] == 'e' || frase[i] == 'i' || frase[i] == 'o' || frase[i] == 'u'){
                    letras++;
                    }

                i++;
            }

            printf("\nA quantidade de vogais é: %d\n", letras);
            break;



            case 7:
            tamanho = 0;
            while (frase[tamanho] != '\0') {
                tamanho++;
            }
            tamanho = tamanho - 1;

            for (i = tamanho; i >= 0; i--){
                printf("%c", frase[i]);
            }
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
    } while (opcao != 0);    

    return 0;
}
