#include <stdio.h>
/**
 * main-Prints the first fibonnaci numbers starting from 1
 *followed by a newline
 * Return: Always 0
 */
int main(void)
{
	long int i, j, k, next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
		printf("%ld, ", j);
		}
		else 
		{
			printf("%ld\n", j);
		}
		next = j + k;
		j = k;
		k = next;
	}
	/*return:0*/
	return (0);
}
