#include "main.h"
/**
 * a function that concatenates two strings
 * This function appends the src string to the dest string,
 * overwriting the terminating null byte (\0)
 * at the end of dest, and then adds a terminating null byte
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int a = -1, i;
	
	for (i = 0; dest[i] != '\0'; i++)
	;

	do
	{
		a++;
		dest[i] = src[a];
		i++;
	}

	while (src[a] != '\0')
	return (dest);
}
