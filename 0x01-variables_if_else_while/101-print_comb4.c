#include <stdio.h>
/**
 * main-Prints the combo of 3 digits in asc order
 *
 * Return: Always 0
 */
int main(void)
{
	int i, a, b;

	i = 48;
	a = 48;
	b = 48;

	while (a < 58)
	{
		i = 48;
		while (i < 58)
		{
			b = 48;
			while (b < 58)
			{
				if (a != i && a != b && i == b && a < i && i < b)
				{
				putchar(a);
				putchar(i);
				putchar(b);
				if (i == 56 && a == 55 && b == 57)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		i++;
	}
	a++;
}
putchar('\n');
/*return:0*/
return (0);
}
