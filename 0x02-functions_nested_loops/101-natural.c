#include <stdio.h>
/**
 * main-Prints the sum of all multiples of 3 and 5
 * below 1024
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int sum3, sum5, sumall;
	int x;

	sum3 = 0;
	sum5 = 0;
	sumall = 0;

	for (x = 0; x < 1024; ++x)
	{
		if ((x % 3) == 0)
		{
			sum3 = sum3 + x;
		}
		else if ((x % 5) == 0)
		{
			sum5 = sum5 + x;
		}
	}
	sumall = sum3 + sum5;
	printf("%lu\n", sumall);
	/*return:0*/
	return (0);
}
