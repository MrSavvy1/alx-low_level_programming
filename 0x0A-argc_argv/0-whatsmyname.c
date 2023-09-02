#include <stdio.h>

/**
 * main - Thhe main programe will print a name and a new line
 * @argc: it holds the total number of argument
 * @argv: this is the varible of te argument passed
 * Return: 0 for sucess
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", *argv + 0);
	return (0);
}
