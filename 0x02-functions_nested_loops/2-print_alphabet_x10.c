#include "main.h"

/**
 * print_alphabet_x10 - print small letters 10 times
 */
void print_alphabet_x10(void)
{
	char i;
	/* After declaration */
	for (i = 0; i < 10; i++)
	{
		char j;
		/* After declaration */
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
