#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: pointer 1
 * @b: pointer 2
 * REturn void
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
