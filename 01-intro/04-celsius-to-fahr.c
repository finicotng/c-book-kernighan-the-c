#import <stdio.h>

int main() {
	float celsius, fahr;
	int lower, upper, step;

	lower = -40;
	upper = 80;
	step = 20;

	printf("Таблица температур по Фаренгейту и Цельсию от -40 до 80 по Цельсию\n");

	celsius = lower;
	while (celsius <= upper) {
		fahr = (celsius / (5.0 / 9.0)) + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
