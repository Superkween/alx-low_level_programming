#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Prints alphabet
 *@void: Empty parameter list for main.
 *Description: Prints the alphabetin lower and upper case can only use putchar
 *Return: 0 (Success)
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';

while (letter <= 'Z')
{
	putchar(letter);
	letter++;
}
putchar('\n');
return (0);
}
