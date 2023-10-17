#include "main.h"

void more_numbers(void)
{
	int a, b;
	
	for (a = 1; a <= 10; ++a)
	{
		for (b = 0; b <= 14; ++b)
		{
			if (a > 9)
				putchar((a / 10) + '0');
			putchar((a % 10)+ '0'); 
		}
		putchar('\n');
	}
}
