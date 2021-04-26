/*
Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer.
Seu programa devera fazer uma busca do valor de X no vetor lido e informar a
posição em que foi encontrado ou se não foi encontrado.

Exemplo: int vetor[10] = {2,5,4,54,43,22,5,9,30,15};
*/

#include <stdio.h>

int main()
{
    int aux = 0, num, vetor[10] = {2, 5, 4, 54, 43, 22, 5, 9, 30, 15};
    printf("Digite um número que será buscado no vetor: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++) {
        if (vetor[i] == num)
        {
            printf("O número %d foi encontrado na posição %d\n", num, i);
            aux ++;
        }       
    }
    if (!aux) {
        printf("O número %d não foi encontrado no vetor\n", num);
    }
}