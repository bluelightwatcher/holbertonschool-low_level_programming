#include"main.h"
/**
 * _strstr - look for matching string(needle) in haystack
 * Description: the nested loops looks for matching sequence of characters
 * it moves the pointers all together.
 * once it breaks out of the nested loop it moves to the next character
 * @haystack: is an array of charachters
 * @needle: is an array of charachters
 * Return: pointer to matching value or NULL pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *bhaystack;
	char *pneedle;

	while (*haystack != '\0')
	{
		bhaystack = haystack;
		pneedle = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
		{
			haystack++;
			pneedle++;
		}
		if (!*pneedle)
			return (bhaystack);
		haystack = bhaystack + 1;
	}
	return (0);
}
