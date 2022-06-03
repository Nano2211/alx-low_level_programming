#include <stdio.h>
/**
 * main-Prints every possible combo
 * of single digit numbers from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	/*return: 0*/
	return (0);
}
