/*
Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura.
*/

#include <stdio.h>

int main() {
    int num;
    int vetor[5];
    for (int i = 1; i <= 5; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);
        vetor[i] = num;
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", vetor[5 - i]);
    }
}