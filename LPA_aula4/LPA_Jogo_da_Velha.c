#include <stdio.h>

#include <stdlib.h>

void desenharTabuleiro(char tabuleiro[3][3]){
    printf("\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if(j < 2){
                printf("|");
            }
        }
        printf("\n");
        if (i < 2){
            printf("---|---|---\n");
        }
    }
    printf("\n");
}

int jogar(char tabuleiro[3][3], int posicao, char jogadorAtual){
    int linha = (posicao - 1) / 3;
    int coluna = (posicao - 1) % 3;

    // Verifica se a posição já está ocupada
    if (tabuleiro[linha][coluna] == 'X' || tabuleiro[linha][coluna] == 'O') {
        return 0;
    }

    tabuleiro[linha][coluna] = jogadorAtual;
    return 1;
}

char verificaVitoria(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[i][0] == tabuleiro[i][1] && tabuleiro[i][1] == tabuleiro[i][2]) {
            return 1;
        }
    }

    for (int i = 0; i < 3; i++) {
        if (tabuleiro[0][i] == tabuleiro[1][i] && tabuleiro[1][i] == tabuleiro[2][i]) {
            return 1;
        }
    }

    if (tabuleiro[0][0] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][2]) {
        return 1;
    }

    if (tabuleiro[0][2] == tabuleiro[1][1] && tabuleiro[1][1] == tabuleiro[2][0]) {
        return 1;
    }
    
    return 0;
}

int main(int argc, char *argv[]) {
    char tabuleiro[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };

    int jogada = 0;
    int posicao;

    while(jogada < 9){

        desenharTabuleiro(tabuleiro);
        char jogadorAtual = (jogada % 2 == 0) ? 'X' : 'O';

        printf("Jogador %c, escolha uma posicao de (1 a 9): ", jogadorAtual);

        if (scanf("%d", &posicao) != 1) {
            while(getchar() != '\n'); // Limpa o buffer se digitarem letras
            printf("Entrada invalida!\n");
            continue;
        }

        if (posicao < 1 || posicao > 9) {
            printf("Posicao invalida! Escolha um numero entre 1 e 9.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
            continue;
        }

        if (!jogar(tabuleiro, posicao, jogadorAtual)){
            printf("Posicao ja ocupada! Tente Novamente.\n");
            printf("Pressione Enter para continuar...");
            getchar();
            getchar();
            continue;
        }

        if (verificaVitoria(tabuleiro)) {
            desenharTabuleiro(tabuleiro);
            printf("Jogador %c venceu!!!\n", jogadorAtual);
            break;
        }

        jogada++;
    }

    if (jogada == 9) {
        desenharTabuleiro(tabuleiro);
        printf("Empate!!!\n");
    }

    printf("Fim do jogo! pressione Enter para sair...\n");
    getchar();
    getchar();

    return 0;
}
