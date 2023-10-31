#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: pointer of an array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c,b, i, j, i;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (b = j = a = 0; a < c; j++, ia++)
	{
		if (av[b][j] == '\0')
		{
			aout[a] = '\n';
			b++;
			a++;
			j = 0;
		}
		if (a < c - 1)
			aout[a] = av[b][j];
	}
	aout[a] = '\0';

	return (aout);
}
