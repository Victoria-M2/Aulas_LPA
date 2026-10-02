#include <stdio.h>

int main(){
    
    float temp[12];
    float soma = 0;
    float media;
    int i;
    
    
    for (i = 0; i < 12; i++) {
        printf("Digite a temperatura do mes %d: ", i + 1);
        scanf("%f", &temp[i]);

        soma = soma + temp[i];
    }
    
    media = soma / 12;
    printf("\n");
    
    printf("Media anual: %.2f C\n", media);
    printf("Temperaturas acima da media sao:\n");
    
    for (i = 0; i < 12; i++) {

        if (temp[i] > media) {

            printf("%d - ", i + 1);

            switch (i + 1) {
                case 1:
                    printf("Janeiro");
                    break;

                case 2:
                    printf("Fevereiro");
                    break;

                case 3:
                    printf("Marco");
                    break;

                case 4:
                    printf("Abril");
                    break;

                case 5:
                    printf("Maio");
                    break;

                case 6:
                    printf("Junho");
                    break;

                case 7:
                    printf("Julho");
                    break;

                case 8:
                    printf("Agosto");
                    break;

                case 9:
                    printf("Setembro");
                    break;

                case 10:
                    printf("Outubro");
                    break;

                case 11:
                    printf("Novembro");
                    break;

                case 12:
                    printf("Dezembro");
                    break;
            }

            printf(" - %.1f C\n", temp[i]);
        }
    }
    
    

    return 0;
}
