/**
 * File: 0-isupper.c
 * Auth: Mihlali Nene
 */

#include "main.h"

/**
 * _isupper - checks if a character is uppercase
 *@c: input char
 *
 * Return : 1 if uppercase and 0 if not
 */
_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
