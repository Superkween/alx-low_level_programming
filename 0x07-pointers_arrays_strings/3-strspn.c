#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: this is the main string to be scanned.
 * @accept: this is the string containing the list of characters to match in s
 *
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	int night = 0;

	char *str1, *str2;

	str1 = s;
	str2 = accept;

	i = 0;

	while (str1[i] != '\0')
	{
		j = 0;


		while (str2[j] != '\0')
		{
			if (str2[j] == str1[i])
			{
				night++;
				break;

			}
			j++;
		}
		if (s[i] != accept[j])

		{
			break;

		}
		i++;
	}
	return (night); /*return the value of night*/

}
