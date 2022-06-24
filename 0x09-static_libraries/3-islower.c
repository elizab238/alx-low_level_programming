#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: c is an asciii character
 * Return: 1 if lowercase
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}
