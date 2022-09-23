#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: string to be converted to uppercase
 *
 * Return: uppercase string
 */

char *string_toupper(char *str)
{
	char i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 'A';
		}
	}
	return (str);
}
