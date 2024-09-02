#include <stdio.h>
#include <string.h>

#define MAX_SIZE 31  // Tamanho máximo da palavra (30 caracteres + '\0')

int main() {
    char palavra[MAX_SIZE];

    // Lê a palavra da entrada
    scanf("%s", palavra);

    // Obtém o tamanho da palavra
    int tamanho = strlen(palavra);

    // Imprime o colchete de abertura
    printf("[");

    // Imprime cada caractere seguido de '-' exceto o último caractere
    for (int i = 0; i < tamanho; i++) {
        printf("%c", palavra[i]);
        if (i < tamanho - 1) {
            printf("-");
        }
    }

    // Imprime o colchete de fechamento
    printf("]\n");

    return 0;
}
