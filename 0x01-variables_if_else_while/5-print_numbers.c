#include <stdio.h>
/**
 * main - block
 * this progamme prints all single digit numbers of 
 * base 10 starting from 0, followed by a new line
 * only two putchar allowed
 * Return: always return 0
 */

int main(void)
{
	int x;

	while (x <= 9)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
