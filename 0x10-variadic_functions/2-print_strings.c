#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count;
	char *str;

	va_list list;

	if(separator == NULL)
	{
		return;
	}

	va_start(list, n);
	for(count = 0; count < n; count++)
	{
		str = va_arg(list, char *);
		printf("%s", str);
		if (count < n - 1)
		{
			printf("%s", separator);
		}
		if (str == NULL)
		{
			printf("(nil)");
		}
	}
	va_end(list);
	printf("\n");
}
