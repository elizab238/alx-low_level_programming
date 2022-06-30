#include "main.h"

/**
 * malloc_checked - function that alocates memory using malloc
 * @b: bytes
 * Return: pointer 98 on exit
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
