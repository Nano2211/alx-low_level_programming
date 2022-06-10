#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if a character is uppercase
 *@c: input char
 *
 * Return : 1 if uppercase and 0 if not
 */
_isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
