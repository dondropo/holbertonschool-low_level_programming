#include <stdio.h>
/**
 * main - init funct..
 * @argc: number of arguments.
 * @argv: arguments pessed.
 * Return: returns 0.
*/
int main(int argc __attribute__((unused)),
	char *argv[] __attribute__((unused)))
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

