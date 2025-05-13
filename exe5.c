#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char letra;

    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    
    while (letra != 'F') {
        printf("Digite uma letra: ");
        scanf(" %c", &letra);
        
        if (letra == 'A') {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        } else if (letra == 'D') {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n - i; j++) {
                    printf(" ");
                }
                for (int j = 1; j <= i; j++) {
                    printf("*");
                }
                printf("\n");
            }
        }
    }

    printf("Programa encerrado\n");
    
    return 0;        
}