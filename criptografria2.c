#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_TEXT_SIZE 1000
#define MAX_KEY_SIZE 100

void repetirChave(char *chave, char *texto, char *chaveExpandida) {
    int i, j = 0;
    int lenTexto = strlen(texto);
    int lenChave = strlen(chave);

    for (i = 0; i < lenTexto; i++) {
        if (isalpha(texto[i])) {
            chaveExpandida[i] = chave[j];
            j = (j + 1) % lenChave;
        } else {
            chaveExpandida[i] = texto[i];  // Copia caracteres não alfabéticos
        }
    }
    chaveExpandida[lenTexto] = '\0';
}

void cifraVigenere(char *texto, char *chave, char operacao) {
    char chaveExpandida[MAX_TEXT_SIZE];
    int i;

    repetirChave(chave, texto, chaveExpandida);

    for (i = 0; texto[i] != '\0'; i++) {
        if (isalpha(texto[i])) {
            int deslocamento = chaveExpandida[i] - 'a';
            if (islower(texto[i])) {
                if (operacao == '+') {
                    texto[i] = 'a' + (texto[i] - 'a' + deslocamento) % 26;
                } else if (operacao == '-') {
                    texto[i] = 'a' + (texto[i] - 'a' - deslocamento + 26) % 26;
                }
            } else if (isupper(texto[i])) {
                if (operacao == '+') {
                    texto[i] = 'A' + (texto[i] - 'A' + deslocamento) % 26;
                } else if (operacao == '-') {
                    texto[i] = 'A' + (texto[i] - 'A' - deslocamento + 26) % 26;
                }
            }
        }
    }
}

int main() {
    char texto[MAX_TEXT_SIZE];
    char chave[MAX_KEY_SIZE];
    char operacao;

    // Lendo o texto claro
    fgets(texto, MAX_TEXT_SIZE, stdin);
    texto[strcspn(texto, "\n")] = '\0';  // Remove o '\n' do final

    // Lendo a chave
    fgets(chave, MAX_KEY_SIZE, stdin);
    chave[strcspn(chave, "\n")] = '\0';  // Remove o '\n' do final

    // Lendo a operação
    scanf(" %c", &operacao);

    // Realizando a cifra ou decifra
    cifraVigenere(texto, chave, operacao);

    // Exibindo o resultado
    printf("%s\n", texto);

    return 0;
}
