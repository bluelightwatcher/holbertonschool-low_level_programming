#include "main.h"

/**
* string_nconcat - concatenate 2 strings
* @s1: pointer to a char
* @s2: pointer to char 
* @n: is an int
* Return: A pointer to a character
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i = n;
	unsigned int k;

	/*checks if strings are empty*/

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/*moves the i index to the end of s1*/
	/*also moves increments i in order to match n+size of s1*/

	for (k = 0; s1[k]; k++)
		i++;
	
	/*allocates size of s1 + n to pointer p*/

	p = malloc(sizeof(char) * (i + 1));
	
	/*reset i to zero*/

	i = 0;
	
	/* runs for loop to copy the value from s1 and s2 to pointer p*/

	for (k = 0; s1[k]; k++)
	{
		if (p == NULL)
			return (NULL);
		p[i++] = s1[k];
	}
	for (k = 0; s2[k] && k < n; k++)
	{
		if (p == NULL)
			return (NULL);
		p[i++] = s2[k];
	}
	p[i] = '\0';

	return (p);
}
