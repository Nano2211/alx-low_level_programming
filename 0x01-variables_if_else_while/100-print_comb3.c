#include <stdio.h>
/**
 * main-Prints all possible combinations of 2 digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i, a;

	i=48;
	a=48;

	while (a < 58)
	{
		i=48;
		while (i < 58)
		{
			if (a != i && a < i)
			{
			putchar(a);
			putchar(i);
			if (i == 57 && a == 56)
			{
				break;
			}
				putchar(',');
				putchar(' ');
		}
		i++;
	}
	a++;
}
putchar('\n');
/*return:0*/
return (0);
}
