#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*thi is the standard io, library and time headers*/

/**
 * main-Prints out if the last digit is
 * larger than 5,
 * less than 5 and equals to 0,
 * less than 6 and larger than 0,
 *
 * Return: Always 0
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit of %d and %d is greate than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit of %d and %d is 0\n", n, l);
	}
	else 
	{
		printf("Last digit of %d and %d is less than 6 and not 0\n", n, l);
	}
	return (0);
}
