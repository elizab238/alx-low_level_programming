#include <stdio.h>

/**
 * main - print all numbers of base 16
 * Description: use putchar function followed by a new line
 * Return: 0
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n > 58; n++)
	{
		putchar(n);
	}
	for (n = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
