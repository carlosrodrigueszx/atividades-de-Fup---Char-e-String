#include <stdio.h>
#include <ctype.h>  // Para a função isalpha()

#define MAX_SIZE 1000  // Tamanho máximo da frase

// Função para verificar se um caractere é uma vogal
int ehVogal(char c) {
    c = tolower(c);  // Converte o caractere para minúsculo
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char frase[MAX_SIZE];
    char resultado[MAX_SIZE];
    int i;

    // Lê a frase da entrada
    fgets(frase, MAX_SIZE, stdin);

    // Percorre a frase e constrói a string de resultado
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] == ' ') {
            resultado[i] = ' ';  // Mantém os espaços
        } else if (isalpha(frase[i])) {
            if (ehVogal(frase[i])) {
                resultado[i] = 'v';  // Vogal
            } else {
                resultado[i] = 'c';  // Consoante
            }
        } else {
            resultado[i] = frase[i];  // Mantém outros caracteres como estão
        }
    }

    // Adiciona o terminador de string
    resultado[i] = '\0';

    // Imprime a string codificada
    printf("%s\n", resultado);

    return 0;
}
