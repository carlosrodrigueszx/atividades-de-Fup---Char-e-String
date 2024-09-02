#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 10100  // Tamanho máximo do número (10100 dígitos)

int ledsPorDigito[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

int main() {
    int N;
    char numero[MAX_DIGITS];
    int i, j, leds;

    // Lê o número de casos de teste
    scanf("%d", &N);

    // Processa cada caso de teste
    for (i = 0; i < N; i++) {
        // Lê o número (como string)
        scanf("%s", numero);

        leds = 0;
        // Calcula o número total de LEDs necessários
        for (j = 0; j < strlen(numero); j++) {
            int digito = numero[j] - '0';  // Converte o caractere para um dígito
            leds += ledsPorDigito[digito];  // Adiciona o número de LEDs necessários para o dígito
        }

        // Imprime o resultado
        printf("%d leds\n", leds);
    }

    return 0;
}
