#include <stdio.h>
#include <stdlib.h>
/**
 * main - block
 * Description: this programme print th ealphabet
 * in lowcase except the letter q and e
 * Return: Always retuen 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
