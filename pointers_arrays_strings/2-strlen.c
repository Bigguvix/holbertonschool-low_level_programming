#include "main.h"

int _strlen(char *s)
{
	int lar = 0;

	while (s[lar] != '\0')
		++lar;
	return (lar);
}
