#include <stdio.h>
#include <string.h>

int main(void) {
    char palavra1 [20], palavra2[20];
    int i, j, tamanho1, tamanho2, anagrama = 1;

    printf("Digite a primeira palavra: ");
    scanf("%s", palavra1);

    printf("Digite a outra palavra palavra: ");
    scanf("%s", palavra2);

    tamanho1 = strlen(palavra1);
    tamanho2 = strlen(palavra2);
    
    printf("Palavra 1: %s\n", palavra1);
    printf("Palavra 2: %s\n", palavra2);

    if(tamanho1 == tamanho2) {
        for (i = 0; i < tamanho1; i++) {
            int encontrado = 0;
            for (j = 0; j < tamanho2; j++) {
                if (palavra1[i] == palavra2[j]) {
                    palavra2[j] = '\0';
                    encontrado = 1;
                    break;
                }
            }
            if (!encontrado) {
                anagrama = 0;
                break;
            }
        }
    }else{
        anagrama = 0;
    }

    if(anagrama) {
        printf("São anagramas\n");
    } else {
        printf("Não são anagramas\n");
    }
    
}