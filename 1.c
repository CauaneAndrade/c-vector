/*
Escreva um programa principal que:
a) Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
b) Imprima na tela os 10 números.
*/

#include <stdio.h>

int main() {
    int vetor[10];

    for (int i = 1; i <= 10; ++i) {
        printf("Digite o %i° número\n", i);
        scanf("%i", &vetor[i]);
    }
    printf("\nOs números digitados foram:\n");
    for (int i = 1; i <= 10; ++i) {
        printf("%i\n", vetor[i]);
    }
}