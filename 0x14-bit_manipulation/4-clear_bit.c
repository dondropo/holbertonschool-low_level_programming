#include "holberton.h"
/**
  * clear_bit - sets the value of a bit to 0
  * @n: number
  * @index: given index
  * Return: integer
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int set = 1;

	set <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	(*n) = (*n) & ~(set);
	return (1);
}
