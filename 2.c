/*
Escreva um programa principal que:
a) Leia 10 números (vetor inteiros) a partir de valores digitados pelo usuário.
b) Imprima na tela apenas os valores maiores e igual a 20.
*/

#include <stdio.h>

int main() {
    int vetor[10];
    int c = 0;

    for (int i = 1; i <= 10; ++i) {
        printf("Digite o %i° número\n", i);
        scanf("%i", &vetor[i]);
    }
    printf("\nOs números digitados maiores ou iguais a 20 são:\n");
    for (int i = 1; i <= 10; ++i) {
        if (vetor[i] >= 20) {
            c++;
            printf("%i\n", vetor[i]);
        }
    }
    if (!c) {
        printf("Não tem número maior ou igual a 20\n");
    }
}