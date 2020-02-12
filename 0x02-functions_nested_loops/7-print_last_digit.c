#include "holberton.h"
/**
 * print_last_digit - program that prints the last digit of a number
 * @l: last digit of a number
 * Return: always a
 */
int print_last_digit(int l)
{
	int a;

	a = l % 10;
	if (a < 0)
	{
		a = (a * -1);
	}
	_putchar(a + '0');
	return (a);
}
