#include"main.h"
/**
 * leet - converts a string to subleet code
 * @str: is a str
 * Return: str
 */

char *leet(char *str)
{
	char *ptr;

	ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr == 'a' || *ptr == 'A')
		{
			*ptr = '4';
		}
		if (*ptr == 'e' || *ptr == 'E')
		{
			*ptr = '3';
		}
		if (*ptr == 'o' || *ptr == 'O')
		{
			*ptr = '0';
		}
		if (*ptr == 't' || *ptr == 'T')
		{
			*ptr = '7';
		}
		if (*ptr == 'l' || *ptr == 'L')
		{
			*ptr = '1';
		}
		ptr++;
	}
return (str);
}
