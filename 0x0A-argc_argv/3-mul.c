#include <stdio.h>
#include <stdlib.h>
/**
 * main - init funct.
 * @argc: number of arguments.
 * @argv: string of entered arg.
 * Return: returns 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
		printf("Error\n");
	else
		printf("%d\n",  atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
