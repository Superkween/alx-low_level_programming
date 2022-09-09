#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints alphabet
 *@void: Empty parameter list for main.
 *Description: Prints numbers 0-9
 *Return: 0 (success)
 */
int main(void)
{
	int num = 48;

		while (num <= 57)
		{
			putchar(num);
				num++;
		}
	putchar('\n');
	return (0);
}
