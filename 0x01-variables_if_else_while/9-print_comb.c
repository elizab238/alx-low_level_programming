#include <stdio.h>

/**
 * main - print all possible combinations of single numbers
 * Description: use putchar function followed by a new line
 * Return: 0
 */
int main(void)
{
	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
