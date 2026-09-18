#include <stdio.h>

int main(void) {

    int senha_correta = 2026;
    int senha;
    int tentativas = 0;

    while (senha != senha_correta && tentativas < 3) {

        printf("Digite a senha: ");
        scanf("%d", &senha);

        if (senha == senha_correta) {
            printf("Acesso liberado!\n");
        } else {
            tentativas++;

            if (tentativas < 3) {
                printf("Senha incorreta!\n");
                printf("Tentativas restantes: %d\n", 3 - tentativas);
            }
        }
    }

    if (tentativas == 3 && senha != senha_correta) {
        printf("Cofre bloqueado!\n");
    }

    return 0;
}
