#include <stdio.h>
#include <ctype.h>
#include <string.h>

void inverter_texto(char *texto) {
    while (*texto) {
        if (isalpha(*texto)) {
            if (islower(*texto)) {
                *texto = toupper(*texto);
            } else if (isupper(*texto)) {
                *texto = tolower(*texto);
            }
        }
        texto++;
    }
}

int main() {
    char texto[101];

    fgets(texto, sizeof(texto), stdin);
    texto[strcspn(texto, "\n")] = '\0'; 

    inverter_texto(texto);
    printf("%s\n", texto);
    return 0;
}