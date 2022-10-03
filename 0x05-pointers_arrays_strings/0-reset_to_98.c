#include "main.h"
#include "stdio.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 98;
	int *p;

	*p = &n;
	printf("the address of n is: %x\n",&n);
	printf("the address of p is: %d\n",p);
	printf("value of *p is:%d\n",*p);
	return (0);
}
