#include <stdio.h>

char Cases(char c){
    char ax;
    if (c >= 'a' && c <= 'z')
    {
        ax = c - ('a' - 'A');
        
    }
    else if(c >= 'A' && c <= 'Z'){
        ax = c + ('a' - 'A');
    }
    else {
        return c;
    }

    return ax;
    
}

int main(int argc, char const *argv[])
{
    char c = '5';
    char x = Cases(c);
    printf("%c", x);
    return 0;
}
