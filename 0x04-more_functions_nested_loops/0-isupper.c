#include "main.h"

/**
 * _isupper - check if a alphabet is upper or not
 * @c: is the character or variables to test
 * Return: 1 if true, otherwise 0 if false
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
