#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Functio that picks a randon number positive or negative.
 *
 * Return: Nothing.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
