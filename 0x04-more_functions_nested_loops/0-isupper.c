#include "main.h"

/**
 * _isupper - checks for upper case character
 * @c: the character to check for
 * Description: checks for upper character
 * Return: 1 if c is upper case. 0 otherwise
 */
int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if (c == uppercase)
		{
			isupper = 1;
			break;
		}
	}
	return (isupper);
}
