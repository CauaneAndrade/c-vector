/*
Escreva um programa principal que:
a) Leia 4 números (vetor de inteiros ) a partir de valores digitados pelo usuário, apenas armazene no vetor os números pares:
    Obs: os valores devem ser armazenados em  posições consecutivas.
b) Imprima na tela a quantidade de valores armazenados no vetor(item a),o maior valor encontrado e também a média desses valores.
*/

#include <stdio.h>

int main() {
    int vetor[10];
    int num, c = 0, maior = 0, soma = 0;

    for (int i = 1; i <= 10; ++i) {  // 1,2,3,4,5,10,30,20,40,2
        printf("Digite o %i° número\n", i);
        scanf("%i", &num);
        if (num % 2 == 0) {
            vetor[c] = num;
            c++;
            if (num > maior) {
                maior = num;
            }
            soma += num;
        }
    }
    float r = soma / c;
    
    int tam = sizeof(vetor) / sizeof(int);
    printf("\nQuant de Valores armazenados: %i. O maior valor encontrado: %i. Média:%f\n", c, maior, r);
}