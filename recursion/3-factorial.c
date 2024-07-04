#include"main.h"

/**
 * factorial - calculates factorial of n recursively
 * @n: is an integer
 * Return: n*factorial(n-1)
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
