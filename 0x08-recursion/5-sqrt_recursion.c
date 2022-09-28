#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 *
 * @n: int
 *
 * Return: int
 *
 */

int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}

/**
 * square - find square root
 *
 * @n: int to find square root
 *
 * @val: square root
 * Return: int
 */
int square(int n, int val)

{
	if (n > val / 2)
		return (-1);
	else if (n * n == val)
		return (n);
	return (_sqrt(n + 1, val));
}
