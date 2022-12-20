#include "main.h"
#include <stdio.h>

/**
 * print_array - prints an array of n size stdout using printf
 * @a: the pointer to the array to be printed
 * @n: the size of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int arrayStart = 0;
	/* declaration finished */
	while (arrayStart < n)
	{
		if (!(arrayStart == n - 1))
		{
			printf("%d, ", a[arrayStart]);
			arrayStart++;
		}
		else
		{
			printf("%d", a[arrayStart]);
			printf("\n");
			arrayStart++;
		}
	}
	if (!(arrayStart == n))
	{
		printf("\n");
		printf("\n");
	}
}
