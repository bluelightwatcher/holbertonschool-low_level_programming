#include"main.h"


/**
 *_memset- copy a const bytes to s
 *@s: is a pointer
 *@b: is a character
 *@n: is an unsigned integer
 *Return: pointer start
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	do 
	{
		*s = b;
		s++;
		n--;
	} while (n > 0);

return (start);
}
