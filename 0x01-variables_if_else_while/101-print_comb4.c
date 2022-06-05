#include <stdio.h>

/**
 * main - print all possible outcomes of three digits
 * Description: Numbers should be printed in ascemding order
 * Return: 0
 */
int main(void)
{
	int n, m, 1;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (1 = 50; 1 < 58; 1++)
			{
				if (1 > m && m > n)
				{

					putchar(n);
					putchar(m);
					putchar(1);
					if (n != 55 || m != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
