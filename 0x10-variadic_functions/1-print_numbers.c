#include "variadic_functions.h"

/**
 *print_numbers - function that print numbers
 *
 *@separator: string to be printed between numbers
 *@n: number of integers passed to the function
 *
 *Return: returns nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	if (separator == NULL)
	{
	}
	va_start(list, n);
		for (count = 0; count < n; count++)
		{
			printf("%i", va_arg(list, int));
			if (count < n - 1)
			{
				printf("%s", separator);
			}
		}
	va_end(list);
	printf("\n");
}
