#include <stdlib.h>
#include <stdio.h>

/*
 * removed as too many functions
 * greater25 - reduces n by as many 25 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducted
 *
 *int greater25(int n)
 *{
 *	int r = (n / 25) * 25;
 *
 *	return (n - r);
 *}
 */
/**
 * greater10 - reduces n by as many 10 cent coins as possible
 * @n: cents
 * Return: remainder of cents after coins deducted
 */
int greater10(int n)
{
	int r = (n / 10) * 10;

	return (n - r);
}
