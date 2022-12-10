#include <stdio.h>

/**
 * main - Iliterate through the alphabet
 *
 * Return: It will return zero
 */
int main(void)
{
	char alph;
	/* some codes after declaration*/
	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
	return (0);
}
