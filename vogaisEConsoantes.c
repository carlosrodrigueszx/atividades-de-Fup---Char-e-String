#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT_SIZE 1000

int ehVogal(char c) {
    // Verifica se o caractere é uma vogal
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    char frase[MAX_TEXT_SIZE];
    char vogais[MAX_TEXT_SIZE] = "";
    char consoantes[MAX_TEXT_SIZE] = "";
    int i, j = 0, k = 0;

    // Lê a frase da entrada
    fgets(frase, MAX_TEXT_SIZE, stdin);
    frase[strcspn(frase, "\n")] = '\0';  // Remove o '\n' do final da frase

    // Percorre a frase classificando as letras
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {
            if (ehVogal(frase[i])) {
                vogais[j++] = frase[i];
            } else {
                consoantes[k++] = frase[i];
            }
        }
    }

    // Adiciona o terminador de string
    vogais[j] = '\0';
    consoantes[k] = '\0';

    // Imprime as vogais e consoantes
    printf("%s\n", vogais);
    printf("%s\n", consoantes);

    return 0;
}
