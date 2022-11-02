#include <stdio.h>

int sqaured(int x)
{
	return x*x;
}

int main()
{
	int a;
	int b;
	a = 6;
	b = sqaured(2);
	int c = a + b;
	printf("%i/n", c);
	return 0;
}
