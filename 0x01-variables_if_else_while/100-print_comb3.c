#include <stdio.h>

/**
 * main - print all possible different combination of two digits
 * Description: use putchar function only five times maximum in your code
 * Return: 0
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 58;

	while (e < 58)
	{
		i = 48;
		while (i < 58)
		{
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++
		}
		e++
	}
	putchar('\n');
	return (0);
}
