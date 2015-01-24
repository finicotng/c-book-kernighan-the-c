#include <stdio.h>

int main() {
	int spaces, tabs, newLines, c;

	spaces = 0;
	tabs = 0;
	newLines = 0;

	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			++spaces;
		} else if (c == '\t') {
			++tabs;
		} else if (c == '\n') {
			++newLines;
		}
	}

	printf("spaces: %d\ntabs: %d\nnew lines: %d\n", spaces, tabs, newLines);
}