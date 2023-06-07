//
// Created by Nícolas on 5/30/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TRIES 3

int main() {
    // imprime o cabeçalho do nosso jogo - Isso é o comentário
    printf("\n\n");
    printf("          P  /_\\  P                              \n");
    printf("         /_\\_|_|_/_\\                            \n");
    printf("     n_n | ||. .|| | n_n         Bem vindo ao     \n");
    printf("     |_|_|nnnn nnnn|_|_|     Jogo de Adivinhação! \n");
    printf("    |\" \"  |  |_|  |\"  \" |                     \n");
    printf("    |_____| ' _ ' |_____|                         \n");
    printf("          \\__|_|__/                              \n");
    printf("\n\n");

    int seed = time(0);
    srand(seed);

    int secretNumber = rand() % 100, bet, tries = 1;
    double points = 1000;

    do {
        printf("Tentativa %d de %d\n", tries, MAX_TRIES);
        printf("Qual é o seu chute? ");
        scanf("%d", &bet);
        printf("Seu chute foi %d\n", bet);

        if (bet < 0) {
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        int isRight = bet == secretNumber;
        int bigger = bet > secretNumber;

        if (isRight) {
            printf("Parabéns! Você acertou!\n");
            printf("Jogue de novo, você é um bom jogador!\n");

            break;
        }

        if (bigger) {
            printf("Seu chute foi maior que o número secreto!\n");
        }

        if (!bigger) {
            printf("Seu chute foi menor que o número secreto!\n");
        }

        points -= abs(bet - secretNumber) / (double) 2;
        printf("Você errou!\n");
        printf("Jogue de novo, você consegue!\n");
    } while (tries++ < MAX_TRIES);

    printf("Fim de jogo!\n");
    printf("Você usou %d tentativas!\n", tries);
    printf("Total de pontos: %.2f\n", points);
}