#include "function_pointers.h"
/**
 *print_name - function that prints a name
 *@name: string of type char to be printed
 *@f: pointed function to print the name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
	{
		return;
	}
	f(name);
}
