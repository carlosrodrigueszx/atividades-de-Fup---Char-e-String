#include <stdio.h>
#include <string.h>

#define MAX_TEXT_SIZE 1000

void inverterString(char *str) {
    int i, j;
    char temp;
    int len = strlen(str);

    // Inverte a string usando dois ponteiros
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char frase[MAX_TEXT_SIZE];

    // Lê a frase da entrada
    fgets(frase, MAX_TEXT_SIZE, stdin);
    frase[strcspn(frase, "\n")] = '\0';  // Remove o '\n' do final da frase

    // Inverte a string
    inverterString(frase);

    // Imprime a string invertida
    printf("%s\n", frase);

    return 0;
}
