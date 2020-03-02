#include "holberton.h"
#include <stdio.h>
/**
 * main - init funct.
 * @argc: num. of arguments.
 * @argv: arguments pessed by console.
 * Return: returns 0
 */
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	printf("%i\n", argc - 1);

	return (0);
}
