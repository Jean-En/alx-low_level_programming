#include "main.h"
/**
 * reverse a string
 * @s: a string
 *
 * Description:a fonction that reverse a string using a prototype
 * Return: return nothing
 */

void rev_string(char *s)
{
	int i = 0, j, right;

	while (s[i])
	{
		i++
	}
	j = i / 2;
	right = 0;

	while (right != j)
	{
		char temp = s[right];
		int left = i - right -1;
		s[right] = s[left];
		right++;
	}
}
