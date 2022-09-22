#include <stdio.h>
/**
 * main: only main fonction
 * this program prints all the numbers of base 16 
 * in lowercase, followed by a new line
 * Return: Always return 0
 */

int maint(void)
{
	char x = '0'; y = 'a';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	while (y <= 'f')
	{
		putchar(y);
	}
	putchar('\n');
	return (0);

}
