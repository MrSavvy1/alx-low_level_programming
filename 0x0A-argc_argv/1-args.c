#include <stdio.h>

/**
 * main - prints the number of arguments passed to the main program
 * @argc: counts the number of argumetns passed into the main program
 * @argv: makes an array of strings from arguments passed into the program
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
