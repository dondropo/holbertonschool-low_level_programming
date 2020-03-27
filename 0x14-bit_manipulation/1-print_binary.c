#include "holberton.h"

/**
 * print_binary2 - function that prints the binary representation of a number.
 * @n: var
 * Return: void
 */
void print_binary2(unsigned long int n)
{
	if (n)
	{
		print_binary2(n >> 1);
		_putchar('0' + (n & 1));
	}
}
/**
 * print_binary - function that prints the binary representation of a number.
 * @n: var
 * Return: void
 */
void print_binary(unsigned long int n)
{
	if (n)
	{
		print_binary2(n);
	}
	else
	{
		_putchar('0');
	}
}
