#include "main.h"

/**
 * print_alphabet -> it will print small letters
 */
void print_alphabet(void)
{
	char c;
	/* After variable declaration */
	for (c = 'a';  c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
