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
		printf(n," is zero\n");
        }
	if (n < 0)
	{
		printf(n," is negative\n");
	}
	else
	{
		printf(n," is positive\n");
	}
	return (0);
}
