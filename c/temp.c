#include <stdio.h>

int main() {
	float f, c;

	printf("Enter fahrenheit value: ");
	scanf("%f", &f);

	c = (5.0/9.0) * (f - 32.0);
	printf("Celcius value is %.1f\n", c);

	return 0;
}
