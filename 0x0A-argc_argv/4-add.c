#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strNumsOnly - checks a string to see if it only
 * contains digits
 * @s: a pointer to an array of strings
 * @n: the number of strings in the array
 * Return: 1 if only digits found, 0 otherwise
 */
int _strNumsOnly(char *s)
{
	if (*s == '\0')
		return (1);

	if (!(*s >= '0' && *s <= '9'))
		return (0);

	return (_strNumsOnly(s + 1));
}

/**
 * main - adds positive numbers supplied as arguments to the program
 * @argc: counts the number of arguments supplied
 * @argv: makes an array of strings from the arguments supplied
 * Return: 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int idx;
	int numsOnly;
	int total;

	/* if no or insufficient umbers are passed in */
	if (argc <= 2)
	{
		printf("0\n");
		return (0);
	}

	/* checking strings only contain digits */
	idx = 1;
	while (idx < argc)
	{
		numsOnly = _strNumsOnly(argv[idx]);
		if (numsOnly == 0)
		{
			printf("Error\n");
			return (1);
		}
		idx++;
	}

	idx = 1;
	total = 0;
	while (idx < argc)
	{
		total = total + atoi(argv[idx]);
		idx++;
	}
	printf("%d\n", total);
	return (0);
}
