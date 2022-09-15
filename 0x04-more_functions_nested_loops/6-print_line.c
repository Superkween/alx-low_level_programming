#include "main.h"

/**
 * print_line - prints lines
 * @n: number of lines
 */

void print_line(int n)
{
	int i;
	int c = 95;

		for (i = 1; i <= n; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
