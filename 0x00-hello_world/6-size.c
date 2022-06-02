#include<stdio.h>
/**
 * main - My entry points
 * Description: Prints all various sizes c
 * Return: 0
 */
int main(void)
{
char a;
int b;
int long c;
int long long d;
printf("Size of a char a: %zu byte(s)\n", sizeof(a));
printf("Size of an int b: %zu byte(s)\n", sizeof(b));
printf("Size of an int long c: %zu byte(s)\n", sizeof(c));
printf("Size of an int long long d: %zu byte(s)\n", sizeof(d));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
