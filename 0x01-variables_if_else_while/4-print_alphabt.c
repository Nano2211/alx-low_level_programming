#include <stdio.h>
/**
 * main- Prints alphabet in lower case,
 * but removes the letter e and q
 *
 * Return: Always 0
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	/* return: 0*/
	return (0);
}
