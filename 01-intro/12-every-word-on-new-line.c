#include <stdio.h>

#define IN  1
#define OUT 0

int main() {
    
    int c, state = OUT;

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            state = IN;
            putchar(c);
        } else if (c == ' ' && state == IN) {
            state = OUT;
            putchar('\n');
        }
    }
}
