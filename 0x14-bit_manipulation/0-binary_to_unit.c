#include "main.h"
#include <string.>
#include <stdio.h>

/**
 * binary_to_unit - a function that converts a binary string to an unsigned int.
 * @b: a pointer to a binary string containing a binary number
 *
 * Return: unsigned int from binary string or, 0 if error
 */
unsigned int binary_to_unit(const char *b)
{
	int len = strlen(b);
	unsigned int x = 0;

	for (int a = 0; a < len; a++)
	{
		if (b[a] == '1')
		{
			x |= (1 << (len - 1 - a));
					return (0);
					}
		if (b[a] != '0')
		{
			printf("invalid binary string\n");
			return (0);
			}
			}
	 for (a = 0; b[a] != '\0'; a++)
	 {
	 if (b[a] != '0' && b[a] != '1')
	 {
			printf("invalid binary string\n");
			return (0);
			}
	}
	 for (a = 0; b[a] != '\0'; a++)
	 {
	 x <<= 1;
		if (b[a] == '1')
			x += 1;
	 }
	 return (x);
}
