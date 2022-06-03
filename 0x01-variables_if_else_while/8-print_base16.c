#include <stdio.h>
/**
 *main-Prints numbers of base 16 which are 0 and 9
 * and,the letters a to f
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	/*return: 0*/
	return (0);
}

