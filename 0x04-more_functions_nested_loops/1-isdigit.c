#include "main.h"

/**
 * _isdigit - checks for a digit from 0 to 9
 * @c : int type
 *
 * Return: 1 for digit 0 for anything else
 */
_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else 
	{
		return (0);
	}
}
