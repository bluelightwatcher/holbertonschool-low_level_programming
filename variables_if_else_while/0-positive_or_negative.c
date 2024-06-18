#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * Main - entry poiny
 * If - checks if integer is positive
 * Else if - checks if integer is equal to zero
 * and is nested whithin if function
 * printf - displays string according to the value of n
 * Return: 0 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
		if (n>0)
	{
	printf("%lu is positive",n);
		} else if(n==0)
		{ 
		printf("%lu is equal to zero",n);
		}
		else
		{
		printf("%lu is negative",n);
		}
	return (0);
}
