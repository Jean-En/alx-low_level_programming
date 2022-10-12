#include "main.h"
/**
 * reverse a string
 * @s: a string
 *
 * Description:a fonction that reverse a string using a prototype
 * Return: return nothing
 */

void rev_string(char *s)
{
	int temp, i, left;

	left = 0;
	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i > left)
	{
		temp = s[i];
		s[i--] = s[left];
		s[left++] = temp;
	}
}
