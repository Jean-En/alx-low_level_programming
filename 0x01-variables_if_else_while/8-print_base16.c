#include <stdio.h>
/**
 * main - only main fonction
 *
 * Description: this program prints all the numbers of base 16
 * in lowercase, followed by a new line
 *
 * Return: Always return 0
 */

int main(void)
{
	char x = '0';
	char y = 'a';

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);

}
