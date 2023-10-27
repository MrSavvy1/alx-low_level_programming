#include "main.h"
#include <stdio.h>


/**
 *_strcpy - copy a string
 * @dest: the pointer destination to receive the string
 * @src: the pointer destination providing the string
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;
	/* After declaration */
	while (*(src + count) != '\0')
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
