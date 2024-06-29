#include"main.h"
#include<stdio.h>
/**
 * cap_string - capitalize the first letter of a word in a string
 * @str: is a string
 * Return: str
 */
char *cap_string(char *str)
{
	char *temp = str;

	while (temp == str)
	{
		if (*temp >= 'a' && *temp <= 'z')
		{
			*temp = *temp - 32;
			break;
		}
	temp++;
	}
	while (*temp != '\0')
	{
		if (*temp == ' ' || *temp == '\n' || *temp == '.' || *temp == '\t')
		{
			temp++;
			if (*temp >= 'a' && *temp <= 'z')
			{
				*temp = *temp - 32;
			}
		}
	temp++;
	}
return (str);
}
