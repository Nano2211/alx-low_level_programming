#include <stdio.h>
/**
 *main-Prints numbers of base 16 which are 0 and 9 
 * and,the letters a to f
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[6] = "abcdef";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	for (i = 0; i <= 6; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	/*return: 0*/
	return (0);
}

