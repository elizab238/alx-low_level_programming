#include "main.h"

/**
 * _strstr - function for locating a string
 * @haystack: pointer string
 * @needle: pointer substring
 *
 * Return: pointer to the beginning of the located substring
 * else NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
int a;

if (*needle == 0)
return (haystack);

while (*haystack)
{
a = 0;

if (haystack[a] == needle[a])
{
do {

if (needle[a + 1] == '\0')
return (haystack);

a++;

} while (haystack[a] == needle[a]);
}
haystack++;
}
return ('\0');
}
