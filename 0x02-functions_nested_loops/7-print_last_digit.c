#include "holberton.h"
/**
  *print_last_digit - program that prints the last digit of a number
  *@a: last digit of a number
  *@l: number to extract the last digit
  *return - always a
  */
int print_last_digit(int l)
{
	int a;

	if (l < 0)
	{
		l = (l * -1);
	}
	a = l % 10;
	_putchar(a + '0');
	return (a);
}
