#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of characters
 * @size: size of the array
 * @c:Address of the char array
 * Return: pointer of an array of characters
 */

char *create_array(unsigned int size, char c)
{
	char *ch;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ch = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ch[i] = c;

	return (cr);
}
