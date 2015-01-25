#include <stdio.h>

#define esq         '\\'
#define tab         't'
#define backspace   'b'
#define backslash   '\\'

int main() {

    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar(esq);
            putchar(tab);
        } else if (c == '\b') {
            putchar(esq);
            putchar(backspace);
        } else if (c == '\\') {
            putchar(esq)    ;
            putchar(backslash);
        } else {
            putchar(c);
        }
    }
}