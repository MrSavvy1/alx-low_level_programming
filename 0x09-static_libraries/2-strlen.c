#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of a string
 */

int _strlen(char *s)
{
	int i;
	/* declare above */
	i = 0;
	/* after declaration */
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
