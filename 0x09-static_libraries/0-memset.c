#include "main.h"

/**
 * _memset - substite value of certain range with another
 * @s: the starting point
 * @b: value to be filled
 * @n: Number of bytes to be fileed
 *
 * Return: a string
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
	return (s);
}
