#include "variadic_functions.h"
/**
 *sum_them_all - sums all of the parameters into the string
 *@n: string elements
 *
 *Return: returns the optr value
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int optr = 0;
	unsigned int count;

	if (n == 0)
	{
		return (0);
	}

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		optr += va_arg(list, int);
	}
	va_end(list);
	return (optr);
}
