#include <stdio.h>
#include <stdlib.h>

/**
 * main -Entry point
 *
 * Description: this programme print the alphabet in lowcase
 *
 * Return: Always return 0
 */

int main(void)
{
	char c = 'a';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}
