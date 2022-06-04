#include <stdlib.h>
#include <time.h>
/*
 * main - source code
 * Description: Returns a positive a negative and zero
 * Return: 0
 */
int main(void)
{
int n;

strand(time(0));

n = rand() - RAND_MAX / 2;

/*your code goes here*/

if (n > 0)
{
	printf("%d is positive\n");
} else if (n == 0)
{
	printf("%d is zero\n");
} else if (n < 0)
{
	printf("%d is negative\n");
}
return (0);
}
