#include "main.h"

void print_alphabet_x10(void)
{
	int y;
	char j;
	
	y = 0;	

	while (y < 10)
	{	
	for (j = 'a'; j <= 'z'; ++j)
		_putchar(j);
	_putchar('\n');
	y++;
	}
}
