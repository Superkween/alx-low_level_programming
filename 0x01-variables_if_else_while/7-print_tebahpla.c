#include <stdlib.h>                                                            
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *@void: Empty parameter list for main.                                 
 *Description: Prints the alphabet in reverse order     
 *can only use putchar                                                   
 *Return: 0 (success) 
 */
int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
{
	putchar(letter);
	letter --; 
}
putchar('\n');
return (0);
}
