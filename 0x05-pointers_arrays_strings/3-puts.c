#include "main.h"

/**
 * _puts - prints a string followed by a new line
 * @str: string
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_put(str[i]);
		i++;
	}

	_put('\n');
}

