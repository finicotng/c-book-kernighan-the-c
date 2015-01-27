#include <stdio.h>

#define ONLYSPACES  0
#define HASSYMBOL   1
#define SPACE       ' '

int main() {
    int state = ONLYSPACES, spaceCount = 0, c;

    while ((c = getchar()) != EOF) {
        
        if (c == '\n') {
            state = ONLYSPACES;
            spaceCount = 0;
            putchar(c);
        } else if (state == ONLYSPACES && c == SPACE) {
            if (spaceCount == 0) {
                putchar(SPACE);
            }
            ++spaceCount;
        } else {
            state = HASSYMBOL;
            if (spaceCount > 0) {
                for (int i = 0; i < spaceCount; i++) {
                    putchar(SPACE);
                }
                spaceCount = 0;
            }
            putchar(c);
        }
    }
}
