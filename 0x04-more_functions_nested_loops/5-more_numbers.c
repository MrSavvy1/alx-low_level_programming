#include "main.h"

/**
 * more_numbers - print every digit except 2 & 4
 */
void more_numbers(void)
{
	int n;
	int i;
	/* declare done */
	for (n = '0'; n <= '9'; n++)
	{
		for (i = '0'; i <= '14'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
