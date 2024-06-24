#include "main.h"
/**
 * _isupper - checks if c is a capital letter
 * @c : is a character
 * Return: 1 if true 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
