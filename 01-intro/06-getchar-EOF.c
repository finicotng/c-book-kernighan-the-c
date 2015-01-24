#include <stdio.h>

int main() {
	int c, cond;

	cond = (c = getchar()) != EOF;
	printf("%d\n", cond);	
}