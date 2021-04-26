/*
Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C
que imprima todos os elementos comuns aos dois vetores.
Exemplo:
    int A[5] = {1,2,4,6,21};
    int B[8] = {2,3,6,7,9,11,15,20};
*/

#include <stdio.h>

int main() {
    int A[5] = {1,2,4,6,21};
    int B[9] = {2,3,6,7,9,11,15,20};

    int tam_a = sizeof(A) / sizeof(int);
    int tam_b = sizeof(B) / sizeof(int);

    int c = tam_b;
    int c2 = tam_a;
    int *v = A;
    int *v2 = B;
    if (tam_a > tam_b) {
        int c = tam_a;
        int c2 = tam_b;
        int *v = B;
        int *v2 = A;
    }
    for (int i = 0; i < c2; i++) {
        for (int j = 0; j < c; j++) {
            if (v2[j] == v[i]){
                printf("%d \n", v[i]);
            }
        }
    }
}