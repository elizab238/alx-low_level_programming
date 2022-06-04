#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - if else conditiom
 * Description: the string should return greater than five, zero or less than six and not zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 5)
	{
	printf("%d is greater than 5\n", n);
	} else if (n == 0)
	{
	printf("%d is 0\n", n);
	} else {
	printf("%d is less than 6 and not 0");
	}
	return (0);
}
