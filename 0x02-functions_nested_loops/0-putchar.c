#include "main.h"
/**
 * main-Prints _putchar followed by a new line 
 *
 * Return: Always 0
 */
int main(void)
{
	char alx[] = "_putchar";
	int i = 0;

	while (alx[i] != '\0')
	{
		_putchar(alx[i]);
		i++;
	}
	_putchar('\n');
	/*return:0*/
	return (0);
}
