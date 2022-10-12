#include "main.h"
/**
 * puts2 - prints every other character starting with the fist
 * character, followed by a new line.
 * @str: the string to manipulate.
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
