#include "main.h"

/**
 * main - nested loops
 * Description: print _putchar folllowed by a new line
 * Return value: 0 (success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
return (0);
}
