/*
Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto,
os tempos registrados em cada volta. Fazer um programa em C para ler os tempos das N voltas,
calcular e imprimir:
    a. melhor tempo;
    b. a volta em que o melhor tempo ocorreu;
    c. tempo médio das N voltas;
*/

#include <stdio.h>

int main() {
    int voltas, aux, volta_melhor_tempo;
    int melhor_tempo = 0, tempo = 0, i = 1;

    printf("Digite a quantidade de voltas: ");
    scanf("%d", &voltas);
    while (i <= voltas)
    {
        printf("Digite o tempo da %d° volta: ", i);
        scanf("%d", &aux);
        tempo += aux;
        if (melhor_tempo < aux) {
            melhor_tempo = aux;
            volta_melhor_tempo = i;
        }
        i++;
    }
    int tempo_medio = tempo / voltas;
    printf("Melhor tempo: %d\n", melhor_tempo);
    printf("Número da volta do melhor tempo: %d\n", volta_melhor_tempo);
    printf("Tempo médio das voltas: %d\n", tempo_medio);
    
}