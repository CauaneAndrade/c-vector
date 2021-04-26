/*
Leia um vetor de 8 posições e troque os 4 primeiros valores
pelos 4 últimos e vice e versa. Escreva ao final o vetor obtido.
*/

#include <stdio.h>

int main() {
    int i, x, aux, vetor[8];
    printf("Digite os números\n");
    for (int i = 0; i < 8; i++) {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 4; i++) {
        aux = vetor[i]; vetor[i] = vetor[i+4]; vetor[i+4] = aux;
    }

    for (int i = 0; i < 8; i++) {
        printf("\n%i", vetor[i]);
    }

    getchar();
    printf("\n\n");
    return(0);
}