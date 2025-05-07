#include <stdio.h>
#include <string.h>

int main() {
    char palavra[11];
    int i, tamanho, palindromo = 1;

    printf("Digite uma palavra de até 10 letras: ");
    scanf("%10s", palavra);

    tamanho = strlen(palavra);

    for (i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0;
            break;
        }
    }

    if (palindromo) {
        printf("É palíndromo.\n");
    } else {
        printf("Não é palíndromo.\n");
    }

    return 0;
}
