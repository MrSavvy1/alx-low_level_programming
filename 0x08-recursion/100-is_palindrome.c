#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: String
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - Detects if a string is a palindrome.
 * @s: String.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (comparator(s, 0, len - 1));
}

/**
 * comparator - Compares characters to check if a string is a palindrome.
 * @s: String.
 * @start: Start index.
 * @end: End index.
 * Return: 1 if it's a palindrome, 0 if not.
 */
int comparator(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (comparator(s, start + 1, end - 1));
}
