
/*
Dado um vetor de 5 posições contendo 0 ou 1(base binária), transformá-lo para a base decimal.
Criar uma função que recebe esse vetor e retorne o número (base decimal).
Protótipo da função: int transforma_binario_decimal(int vetor[5])

Exemplo:
Dado o vetor: 1, 0, 0, 1, 0
A saída será 18, pois (1. 2) 4 + (0. 2) 3 + (0. 2) 2 + (1. 2) 1 + (0. 2) 0 = 18
*/

#include <stdio.h>
#include <math.h>//necessária para usar as funções matemáticas

int transforma_binario_decimal(int vetor[])
{   
    int result = 0, c = 1;
    for (int i = 0; i < 5; i++) {
        int este_num = vetor[5 - c];
        c++;
        int potencia = pow(2, i);
        result += potencia * este_num;
    }
    printf("resultado = %d\n", result);
}

int main()
{
    int vetor[5] = {1, 0, 0, 1, 0};


    transforma_binario_decimal(vetor);
}