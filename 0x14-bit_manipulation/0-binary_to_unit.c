#include "main.h"

/**
* binary_to_uint - a function that converts a binary number to an unsigned int.
* @b: pointer to a string with a binary number
* Return: unsigned int with decimal value of binary number, or 0 if error
*/
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int xx;

	xx = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)
{
	if (b[a] != '0' && b[a] != '1')
		return (0);
}
for (a = 0; b[a] != '\0'; a++)
{
	xx <<= 1;
	if (b[a] == '1')
		xx += 1;
}
return (xx);
}
