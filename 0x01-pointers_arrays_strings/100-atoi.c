#include "main.h"

/**
 * _atoi - Main Function
 *
 * @s: String.
 *
 * Return: Value.
 */
int _atoi(char *s)
{
	int signo = 1;
	unsigned int value = 0;
	char flag = 0;

	while (*s)
	{
		if (*s == '-')
			signo *= -1;

		if (*s >= '0' && *s <= '9')
		{
			flag = 1;
			value = value * 10 + *s - '0';
		}

		else if (flag)
			break;
		++s;
	}

	if (signo < 0)
		value = (-value);

	return (value);
}
