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
	int end;
	int start = 0;
	char temp;
	
	for (end = 0; s[end] != '\0'; end++)
	{
	}
	end--;
	
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
