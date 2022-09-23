#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @c: string to be converted to uppercase
 *
 * Return: uppercase string
 */

char *string_toupper(char *);
{
	char *ch;

	for (ch = c; *ch; ch++)
	{
		if ('a' <= *ch && <= 'z')
		{
			*ch -= 'a' - 'A';
		}
	}
	return (c);
}
