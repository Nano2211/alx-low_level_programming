#include <stdio.h>
/**
 * main-Print lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}
	putchar('\n');
	/* return:0*/
	return (0);
}
