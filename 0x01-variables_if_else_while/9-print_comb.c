#include <stdio.h>
/**
 * main - just a main function
 *
 * program that  prints all possible combinations of single-digit numbers
 * numbers must be separated by a comma
 * numbers should be printed in ascending order
 * only putchar fonction is allowed
 * Return - always return 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
		if (i != 9)
		{
			putchar(',');
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
