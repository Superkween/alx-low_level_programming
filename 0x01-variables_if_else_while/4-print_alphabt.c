#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints alphabet
 *@void: Empty parameter list for main.
 *Description: Prints the alphabetin lower case skip q and e
 *Can only use putchar
 *Return: 0 (Suceess)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter == 'q')
		{
			letter++;
		}
		else if (letter == 'e')
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');
	return (0);
}


