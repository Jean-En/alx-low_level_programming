#include <stdio.h>
/**
 * main-main block
 * Description: this programme print the alphabet in lowcase then in uppercase
 *followed by a new line
 * Return: Always return 0
 */

int main(void)
{
	char c = 'a', b = 'A';

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (b = 'A'; b <= 'Z'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
