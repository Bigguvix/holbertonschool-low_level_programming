#include <stdio.h>

/**
 * main - Main Function, prints sizes of various types.
 *
 *
 * Return: Nothing.
 */
int main(void)
{
	char a;
	int v;
	long int b;
	long long int c;
	float d;

	printf("Size of a char: %zu byte(s)\n", sizeof(a));
	printf("Size of an int: %zu byte(s)\n", sizeof(v));
	printf("Size of a long int: %zu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(c));
	printf("Size of a float: %zu byte(s)\n", sizeof(d));
	return (0);
}
