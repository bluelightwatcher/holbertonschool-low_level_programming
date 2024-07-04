#include"main.h"
#include<stdio.h>

/**
 * _pow_recursion - calculate x to the factor of y recursively
 * @x: is an integer
 * @y: is an integer
 * Return: -1 or "x" or "x" * "x"
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 1 || y == 0)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
