/*
Dado um vetor de 5 posições contendo 0 ou 1(base binária), transformá-lo para a base decimal.
Criar uma função que recebe esse vetor e retorne o número (base decimal).
Protótipo da função: int transforma_binario_decimal(int vetor[5])

Exemplo:
Dado o vetor: 1, 0, 0, 1, 0
A saída será 18, pois (1. 2) 4 + (0. 2) 3 + (0. 2) 2 + (1. 2) 1 + (0. 2) 0 = 18
*/

#include <stdio.h>

int transforma_binario_decimal(int num)
{
    int pot2,  // guardara uma potencia de 2
        final; // numero dado convertido para base 10


    // inicializacoes
    final = 0;
    pot2 = 1;

    printf("%d na base 10 e': ", num);

    while (num != 0)
    {
        final = final + num % 10 * pot2; // processa um digito binario
        num = num / 10;
        pot2 = pot2 * 2;
    }
    printf("%d\n", final);

    return 0;
}

int main()
{
    int num;   // numero dado (na base 2)

    printf("Digite o numero a ser transformado da base 2 para a base 10: ");
    scanf("%d", &num);
    transforma_binario_decimal(num);
}