#include "variadic_functions.h"

/**
 *print_strings - function that prints strings
 *
 *@separator: add space with comma between arrays
 *@n: strings passed to the function
 *
 *Return: returns str
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *str;

	va_list list;


	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		str = va_arg(list, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (separator && n != count + 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
