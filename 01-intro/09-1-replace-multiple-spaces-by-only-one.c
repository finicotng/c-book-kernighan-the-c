#include <stdio.h>

#define IN      1
#define OUT     0
#define SPACE   ' '

int main() {
    int state = OUT, c;

    while ((c = getchar()) != EOF) {
        
        if (c != SPACE) {
            state = IN;
            putchar(c);
        } else if (c == SPACE && state == IN) {
            state = OUT;
            putchar(c);
        }
    }
}
