#include "main.h"
/**
*_isalpha - checks if the character is a letter
*@c: is surprisingly an int
*Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
