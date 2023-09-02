#include <stdio.h>

/**
 * main - prints all the arguments received by the program
 * @argc: counts the number of arguments passed in
 * @argv: makes an array of strings of each argument passed in
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int idx = 0;

	while (idx < argc)
	{
		printf("%s\n", argv[idx]);
		idx++;
	}
	return (0);
}
