#include "holberton.h"
/**
  *swap_int - swaps the values of two integers
  *@a: variable to be swapped to 42
  *@b: variable to be swapped to 98
  */
void swap_int(int *a, int *b)
{
	int v;

	v = *a;
	*a = *b;
	*b = v;
}
