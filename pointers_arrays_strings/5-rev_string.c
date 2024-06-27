#include"main.h"

/**
 * rev_string - loops over the string in reverse
 * Description: first goes to the end of the string
 * then prints characters whilst going back to the first character
 * once the loop is over a null character 
 * @s: is a string
 */

void rev_string(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
	}
	while (index > 0)
	{
		index--;
		_putchar(s[index]);
	}
}
