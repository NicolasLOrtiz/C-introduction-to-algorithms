//
// Created by Nícolas on 5/30/2023.
//
#include <stdio.h>

#define MAX_TRIES 3

int main() {
    // imprime o cabeçalho do nosso jogo - Isso é o comentário
    printf("************************************\n");
    printf("Bem vindo ao jogo de adivinhação\n");
    printf("************************************\n");

    int secretNumber = 42, bet, tries = 1;

    do {
        printf("Tentativa %d de %d\n", tries, MAX_TRIES);
        printf("Qual é o seu chute? ");
        scanf("%d", &bet);
        printf("Seu chute foi %d\n", bet);

        if(bet < 0) {
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

        printf("Você errou!\n");
        printf("Jogue de novo, você consegue!\n");

    } while (tries++ < MAX_TRIES);
}