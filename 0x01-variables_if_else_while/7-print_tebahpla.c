#include <stdio.h>
/**
 * main-Print lowercase alphabet in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 26; i <= 0; i--)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	/* return:0*/
	return (0);
}
