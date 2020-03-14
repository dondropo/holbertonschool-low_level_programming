#include "holberton.h"

/**
 * _movex - returns the natural square root of a number
 * @n: number to find natural square root
 * @x: square itself
 * Return: natural square root x
 */
int _movex(int n, int x)
{
	int result;

	result = x * x;

	if (result == n)
		return (x);
	if (result < n)
		return (_movex(n, x + 1));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to find natural square root
 *
 * Return: natural square root x
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_movex(n, 0));
}
