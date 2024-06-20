#include "main.h"
/**
*_islower - checks if the character is in lowercase
*@c: is the variable
*Return: 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
