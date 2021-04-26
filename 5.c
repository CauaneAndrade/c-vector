/*
Faça um programa (main) que popule o vetor  de 5 posições com 0 ou 1 e chame
a função transforma_binario_decimal e exiba o resultado (base decimal).
*/

#include <stdio.h>
#include <math.h> //necessária para usar as funções matemáticas

int transforma_binario_decimal(int vetor[5])
{   
    int result = 0;
    for (int i = 0; i < 5; i++) {
        int este_num = vetor[5 - i];
        int potencia = pow(2, i);
        result += potencia * este_num;
    }
    printf("resultado = %d\n", result);
}

int main()
{
    int num;   // numero dado (na base 2)
    int vetor[5];
    printf("Digite o numero a ser transformado da base 2 para a base 10\n");
    for (int i = 1; i <= 5; i++) {
        printf("Digite o %d° número: ", i);
        scanf("%d", &num);
        vetor[i] = num;
    }

    transforma_binario_decimal(vetor);
}