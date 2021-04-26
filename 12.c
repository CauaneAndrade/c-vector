/*
Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição,
com os valores subsequentes do vetor. Dessa forma todos “zeros”
*/

#include <stdio.h>

#define MAX_TAM 10

int main()
{ 
    int vet[MAX_TAM];

    // lê entrada
    for(int i = 0; i < MAX_TAM; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    // realiza-se a cópia utilizando dois índices
    int pos_copia = 0;
    for(int pos_leitura = 0; pos_leitura < MAX_TAM; pos_leitura++)
    {
        if(vet[pos_leitura] == 0)
            continue;

        vet[pos_copia] = vet[pos_leitura];
        pos_copia++;
    }

    // imprime o resultado
    printf("\n");
    for(int i = 0; i < pos_copia; i++)
        printf("Vetor [%d] = %d\n", i + 1, vet[i]);
}