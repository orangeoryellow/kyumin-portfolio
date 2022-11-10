#include <stdio.h>

// Write a program to add 3 numbes
// Ask user for 3 different numbers using scanf
// scanf("%i", ...);
// Then printf the sum of the three numbers

int main() { 
	int x, y, z;
	printf("Enter 1st number: ");
	scanf("%i", &x);
	printf("Enter 2nd number: ");
	scanf("%i", &x);
	printf("Enter 3rd number: ");
	scanf("%i", &x);
	printf("The sum of the three number is %s\n", x + y + z);
	return 0;
}
