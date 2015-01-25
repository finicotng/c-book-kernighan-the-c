#include <stdio.h>

#define IN  1 /* внутри слова */
#define OUT 0 /* снаружи слова */

/* подсчет строк, слов и символов во входном потоке */

int main() {
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while ((c = getchar()) != EOF) {
        ++nl;
        
        if (c == '\n') {
            ++nl;
        }
        
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        } else if (state == OUT) {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);
}

/*
1.  протестировать подсчет слов можно, подсунув на вход программе файлик с
    известным числом слов.
2.  входной поток с цифрами и знаками препинания, которые пишутся отдельно от слов,
    например, дефис или косая черта. словами они на являются, но будут
    учитываться при подсчете.
*/
