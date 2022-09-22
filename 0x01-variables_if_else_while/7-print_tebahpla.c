#include <stdio.h>

/**
 * main - main function
 * this program that prints the lowercase alphabet
 * in reverse, followed by a new line
 * Return: Always return 0
 */

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
