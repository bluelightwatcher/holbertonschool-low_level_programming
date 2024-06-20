#include "main.h"
/**
*_islower - checks if the character is in lowercase
*@c: is the variable
*Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
