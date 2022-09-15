#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/** main - Entry point
 *
 * betty style doc for fonction main goes there
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
	{
		printf("the number is zero:\n",n);
        }
	if (n < 0)
	{
		printf("The number is negative:\n",n);
	}
	else
	{
		printf("the number is positive\n",n);
	}
	return (0);
}
