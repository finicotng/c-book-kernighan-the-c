#include <stdio.h>

int main() {
	
	int c;

	while ((c = getchar()) != EOF) {
		putchar(c);

		if (c == ' ') {
			putchar('\n');
		}
	}
}
