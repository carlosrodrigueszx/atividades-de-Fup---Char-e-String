#include <stdio.h>
#include <string.h>

#define MAX_TEXT_SIZE 1000

void substituicao(char *texto, char *word1, char *word2) {
    int i, j;
    int len1 = strlen(word1);

    for (i = 0; texto[i] != '\0'; i++) {
        for (j = 0; j < len1; j++) {
            if (texto[i] == word1[j]) {
                texto[i] = word2[j];
                break;
            } else if (texto[i] == word2[j]) {
                texto[i] = word1[j];
                break;
            }
        }
    }
}

int main() {
    char texto[MAX_TEXT_SIZE];
    char word1[MAX_TEXT_SIZE];
    char word2[MAX_TEXT_SIZE];

    // Lendo o texto e as palavras de cifragem
    fgets(texto, MAX_TEXT_SIZE, stdin);
    fgets(word1, MAX_TEXT_SIZE, stdin);
    fgets(word2, MAX_TEXT_SIZE, stdin);

    // Removendo o '\n' do final das strings
    texto[strcspn(texto, "\n")] = '\0';
    word1[strcspn(word1, "\n")] = '\0';
    word2[strcspn(word2, "\n")] = '\0';

    // Chamando a função de substituição
    substituicao(texto, word1, word2);

    // Exibindo o resultado
    printf("%s\n", texto);

    return 0;
}
