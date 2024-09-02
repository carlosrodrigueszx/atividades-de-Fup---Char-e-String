#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000  // Tamanho máximo da frase

int main() {
    char frase[MAX_SIZE];
    char palavra[MAX_SIZE];
    int i, j;
    int pos = 0;
    
    // Lê a frase da entrada
    fgets(frase, MAX_SIZE, stdin);
    
    // Remove o caractere de nova linha, se houver
    frase[strcspn(frase, "\n")] = '\0';
    
    // Percorre a frase e processa cada palavra
    for (i = 0; i < strlen(frase); i++) {
        // Verifica se o caractere atual é um espaço ou o final da string
        if (frase[i] == ' ' || frase[i] == '\0') {
            palavra[pos] = '\0';  // Termina a palavra
            // Imprime a palavra repetida
            printf("%s %s ", palavra, palavra);
            pos = 0;  // Reseta o índice da palavra
        } else {
            palavra[pos++] = frase[i];  // Adiciona o caractere à palavra
        }
    }
    
    // Imprime a última palavra repetida
    palavra[pos] = '\0';
    printf("%s %s\n", palavra, palavra);

    return 0;
}
