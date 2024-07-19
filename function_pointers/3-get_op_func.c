#include "3-calc.h"

/**
 * _strcmp - loops through 2 strings simultaneously
 * Description: Compares ascii value of each characters for each increment
 * @s1: is a string
 * @s2: is a string
 * Return: the diffence between character value found in s1 and s2 (as ascii)
 */

int _strcmp(char *s1, char *s2)
{
        while (*s1 != '\0' && *s2 != '\0')
        {
                if (*s1 != *s2)
                {
                        return (*s1 - *s2);
                }
        s1++;
        s2++;
        }
return (*s1 - *s2);
}

op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;

int (*get_op_func(char *s))(int, int)
{
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

