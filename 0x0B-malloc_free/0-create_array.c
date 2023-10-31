#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size:create size of the array.
 * @c: where char is stored *
 * Return: pointer of an array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *cr;
	unsigned int i;

	cr = malloc(sizeof(c) * size);
	if (size == 0
		return NULL);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		cr[i] = c;

	return (cr);
}
