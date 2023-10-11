#include "main.h"

int _islower(int c)
{
	int a = 0;
	char u;

	for (u = 'a'; u <= 'z'; ++u)
	{
		if (u == c)
			a = 1;
	}

	return (a);
}
