#include <stdio.h>

void Calc(char a, char op, char b){
    int posicaoDoUm = a - 'a';
    int posicaoDoDois = b - 'a';
    int posicaoFinal;

    if (op == '+')
    {
        posicaoFinal = (posicaoDoUm + posicaoDoDois) % 26;
    } else{
        posicaoFinal = (posicaoDoUm - posicaoDoDois + 26) % 26;
    }

    printf("%c", posicaoFinal + 'a');
    
}

int main(int argc, char const *argv[])
{
    char a = 'c';
    char op = '-';
    char b = 'd';
    Calc(a, op, b);
    return 0;
}
