#include "main.h"
/**
 *_abs - returns the absolute value
 *if a is below 0 it is multiply by its inverse
 *@a: is an integer
 *Return: a
 */

int _abs(int a)
{
	if (a < 0)
	{
	a = a * -1;
	}
	return (a);
}
