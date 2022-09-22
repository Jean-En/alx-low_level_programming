#include "main.h"
#include <stdio.h>

/**
 * main - check the main code
 *
 * _strcat - a function that concatenates two strings
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	/* store the length of dest in i*/
	for (i = 0; dest[i] != '\0'; ++i)
		;
	/* concatenate src to dest */
	for (j = 0; src[j] != '\0'; ++j; ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
