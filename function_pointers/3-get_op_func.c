#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

