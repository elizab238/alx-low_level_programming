#include <stdio.h>

/**
 * main - print outcomes of two two digits
 * Description: number shoud range from 0 to 99 separated by a space
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = 0; j < 100; j++)
		{
			if (i < j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (i != 98 || j != 99)
				{
					putchar(' ');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
