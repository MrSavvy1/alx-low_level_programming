#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if number is positive, zero or negative
*
*Description: using the main function
*This program prints "Programming is positve,zero or negative
*Return: 0
*/
int main(void)

srand(time(0));
n = rand() -RAND_MAX / 2;
  /* your code goes there */
if (n > 0)
{
	print("%i is positive\n", n);
}
else if (n == 0)
{
	print(%i is zero\n", n);
else if (n < 0)
{
	print("%i is negative\n", n);
}
return (0);
}
