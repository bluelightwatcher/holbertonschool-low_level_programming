#include"main.h"
/**
 * string_toupper - convert lowercase to uppercase
 * @str: is a string
 * Return: str
 */
char *string_toupper(char *str)
{
	char *temp = str;

	while (*temp != '\0')
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - 32;
		}
		temp++;
	}
return (str);
}
