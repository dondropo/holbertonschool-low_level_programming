#include "variadic_functions.h"
#include <stdarg.h>
void fun_char(va_list chr)
{
	printf("%c", va_arg(chr, int));
}

void fun_int(va_list integer)
{
	printf("%i", va_arg(integer, int));
}

void fun_float(va_list flt)
{
	printf("%f", va_arg(flt, double));
}

void fun_str(va_list str)
{
	char *string;
	string = va_arg(str, char *);

	if (str == NULL)
	{
		printf("(nil)");
	}
	printf("%s", string);
}
/**
 *print_all - function to print anything
 *@format: list of types arguments passed to the function
 *
 *Return: none
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int count1;
	unsigned int count2;
	char *space = "";

	va_f form[] = {
		{"c", fun_char},
		{"i", fun_int},
		{"f", fun_float},
		{"s", fun_str},
		{NULL, NULL}
	};

	va_start(list, format);

	count1 = 0;
	while (format[count1] != '\0' && format)
	{
		count2 = 0;
		while (count2 < 4)
		{
			if (format[count1] == *form[count2].check_type)
			{
				printf("%s", space);
				form[count2].fun(list);
				space = ", ";
			}
			count2++;
		}
		count1++;
	}

	va_end(list);
	printf("\n");
}

