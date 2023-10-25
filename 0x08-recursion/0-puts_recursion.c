#include "main.h"

/**
 * _puts_recursion - prints a char concurently  using a recursion to form a string, followed by a new line.
 * @s: string with char data type
 * Return: no return.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
