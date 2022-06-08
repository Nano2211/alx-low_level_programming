#include "main.h"
/**
 * _abs- Prints the absolute value of a number
 *
 * @n: is an int type
 *
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (n);
	}
}
