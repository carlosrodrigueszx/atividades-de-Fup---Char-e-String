#include <stdio.h>
#include <string.h>

#define MAX_TEXT_SIZE 1000

int contarCaracter(char *frase, char caractere) {
    int i, contador = 0;
    int tamanho = strlen(frase);

    for (i = 0; i < tamanho; i++) {
        if (frase[i] == caractere) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char frase[MAX_TEXT_SIZE];
    char caractere;

    // Lendo a frase
    fgets(frase, MAX_TEXT_SIZE, stdin);
    frase[strcspn(frase, "\n")] = '\0';  // Remove o '\n' do final da frase

    // Lendo o caractere
    scanf("%c", &caractere);

    // Contando a ocorrência do caractere
    int ocorrencias = contarCaracter(frase, caractere);

    // Exibindo o resultado
    printf("%d\n", ocorrencias);

    return 0;
}
