#include <stdio.h>
#include <ctype.h>  // Para usar a função tolower()

#define MAX_SIZE 1000  // Tamanho máximo da frase

int main() {
    char frase[MAX_SIZE];
    char caractere;
    int contador = 0;

    // Lê a frase da entrada
    fgets(frase, MAX_SIZE, stdin);

    // Lê o caractere a ser contado
    scanf(" %c", &caractere);

    // Converte o caractere para minúsculo para comparação
    caractere = tolower(caractere);

    // Percorre a frase contando as ocorrências do caractere
    for (int i = 0; frase[i] != '\0'; i++) {
        if (tolower(frase[i]) == caractere) {
            contador++;
        }
    }

    // Imprime o número de ocorrências
    printf("%d\n", contador);

    return 0;
}
