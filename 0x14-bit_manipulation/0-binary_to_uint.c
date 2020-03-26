#include "holberton.h"
/**
 *binary_to_uint - function that coneverts a binary in a unsigned int
 *@b: pointer to a binary string
 *
 *Return: returns the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!*b && b == NULL)
		return (0);

	while (*b)
	{
		n <<= 1;
		if (*b == '1')
			n += 1;
		else if  (*b != '0')
			return (0);
		++b;
	}
	return (n);
}
