#include <stdio.h>

int main() {
    int maior;
    int i = 0;
    int vetor[5] = {9, 7, 3, 6, 8};

    printf("Antes: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    for(int j = 0; j < 4; j++) {
        for(int i = 0; i < 4; i++) {
            if( vetor[i] > vetor[i+1] ) {
                maior = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = maior;
            }
        }
    }

    printf("Depois: ");

    for(int i = 0; i < 5; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\n");
    
    return 0;
}