#include "main.h"
/**
 * print_rev - prints a string
 * @s: parameter
 * Description: prints a sprint in reverse followed by a new line
 * Return: Always (0)
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
