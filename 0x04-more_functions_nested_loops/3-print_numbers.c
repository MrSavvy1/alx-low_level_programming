#include "main.h"

/**
 * print_numbers - print all numbers 0 through 9 and then new line
 * return: always return 0
 */

void print_numbers(void)
{
	int i;
	/* declaration done */
	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
