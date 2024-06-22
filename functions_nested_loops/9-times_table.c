#include "main.h"

char result (int k)
{
	if (k > 9)
	{
	_putchar((k/10)+48);
	_putchar((k%10)+48);
	}
	else
	{
	_putchar(k+48);
	}
return (0);
}

char format (char k ,int j)
{
	while (j < 9)
	{
		if (k >9)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
		{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		}
	break;
	}
return (0);
}
	
int main (void)
{
	int i;
	int j;
	
	for (i =0 ; i <=9 ; i++)
	{
		for (j = 0 ; j <= 9 ; j++)
		{
			int k = i * j;
		
			result(k);
			format (k,j);
		}
	_putchar('\n');
	}
return (0);
}


