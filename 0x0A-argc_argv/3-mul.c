#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check if variable is a digit
 * @c: automatic variable
 * Return: Always 1 if digit, 0 otherwise.
 */
int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}

/**
 * _isPosOrNeg - check string for char of '-' until first digit is arrived
 * at, then check if total number of char '-' is an even or odd number
 * reflecting which symbol it is
 * @s: the string to be checked
 * Return: char a (with '-' if tally was an odd number)
 */
char _isPosOrNeg(char *s)
{
	int count = 0;
	int neg = 0;
	char a = '0';

	while (s[count] != '\0' && (s[count] < '0' || s[count] > '9'))
	{
		if (s[count] == '-')
		{
			neg++;
		}
		count++;
		if (s[count] >= '0' && s[count] <= '9')
			break;
	}
	if (!(neg % 2 == 0))
	{
		a = '-';
	}
	return (a);
}

/**
 * _atoi - creates an integer from the first string of digits in string
 * @s: the string to be used
 * Return: newly created integer string or 0 if no digits found
 */
int _atoi(char *s)
{
	int count = 0;
	char posOrNeg;
	int intFind;
	int convertInt;
	int tempInt;
	int strInt;

	while (s[count] != '\0')
	{
		intFind = _isdigit(s[count]);
		if (intFind == 1)
			break;
		count++;
	}
	convertInt = (int) (s[count] - 48);
	strInt = convertInt;
	tempInt = convertInt;
	count++;
	while (s[count] >= '0' && s[count] <= '9')
	{
		convertInt = (int) (s[count] - 48);
		strInt = (tempInt * 10) + convertInt;
		tempInt = strInt;
		count++;
	}
	posOrNeg = _isPosOrNeg(s);
	if ((posOrNeg == '-'))
	{
		strInt = strInt * -1;
	}
	if (intFind == 1)
		return (strInt);
	else
		return (0);
}

/**
 * main - multiplies two numbers given to the program as arguments
 * @argc: counts the number of arguments supplied
 * @argv: makes an array of strings from the arguments supplied
 * Return: product or 1 for error
 */
int main(int argc, char *argv[])
{
	int product, num1, num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[argc - 2]);
	num2 = _atoi(argv[argc - 1]);
	product = num1 * num2;
	printf("%d\n", product);
	return (0);
}
