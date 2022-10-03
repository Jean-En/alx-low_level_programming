#include "main.h"
#include "stdio.h"
/**
 * _putchar - write the character c to stout
 * @n: parameter
 *
 * Description: a function that takes a pointer to
 * an int as parameter and updates the value it points to to 98
 *
 */
void reset_to_98(int *n);
{
	int n = 98;
	int *p;

	*p = &n;
	printf("the address of n is: %x\n",&n);
	printf("the address of p is: %d\n",p);
	printf("value of *p is:%d\n",*p);
	return (0);
}
