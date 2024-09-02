#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

void obterSubstring(char *texto, int indiceInicial, int quantidadeCaracteres, char *resultado) {
    int tamanhoTexto = strlen(texto);

    // Verifica se o índice inicial é válido
    if (indiceInicial < 0 || indiceInicial >= tamanhoTexto) {
        resultado[0] = '\0';  // Retorna uma string vazia
        return;
    }

    int i, j = 0;

    // Percorre a string a partir do índice inicial
    for (i = indiceInicial; i < tamanhoTexto && j < quantidadeCaracteres; i++, j++) {
        resultado[j] = texto[i];
    }

    // Adiciona o terminador de string
    resultado[j] = '\0';
}

int main() {
    char texto[MAX_SIZE];
    int indiceInicial, quantidadeCaracteres;
    char resultado[MAX_SIZE];

    // Lê a string de entrada
    fgets(texto, MAX_SIZE, stdin);
    texto[strcspn(texto, "\n")] = '\0';  // Remove o '\n' do final da string

    // Lê o índice inicial e a quantidade de caracteres
    scanf("%d", &indiceInicial);
    scanf("%d", &quantidadeCaracteres);

    // Obtém a substring
    obterSubstring(texto, indiceInicial, quantidadeCaracteres, resultado);

    // Imprime a substring resultante
    printf("%s\n", resultado);

    return 0;
}
