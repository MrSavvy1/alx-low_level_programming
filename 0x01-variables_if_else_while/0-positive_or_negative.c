#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This program dictates if a number is + or -
 * Function: The function is conditional on the main
 * Return: This program returns zo
 */
int main(void)
{
	int n;
	/* All other code after declaration */
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n",n);
	else if (n > 0)
		printf("%d is positive\n",n);
	else
		printf("%d is negative\n",n);
	return (0);
}
