#include "main.h"
#include <stdio.h>
/**
 * print_to_98-Prints all natural number form n to 98
 * the numbers must be ordered
 *
 * @n: int type 
 *
 * Return: Always 0
 */
int print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--
		}
	}
	else
	{
		while (n <= 98)
		{
			printf("%d",n);
			if (n != 98)
			{
				printf(", ");
			}
			n++
		}
	}
	printf("\n");
}
