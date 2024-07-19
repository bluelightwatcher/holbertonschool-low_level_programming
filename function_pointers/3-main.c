#include "3-calc.h"

int main(int argc, char *argv[])
{

	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	char operator = argv[2][0];

	int (*operation)(int, int) = get_op_func(argv[2]);
	

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	
	if (operator != '+' &&  operator != '-' && operator != '/' && operator != '*' && operator != '%')
	{
		printf("Error\n");
		exit (99);
	}
	if (num2 == '0' && (operator == '/' || operator == '%'))
	{
		printf("Error\n");
		exit (100);
	}
	int result = operation(num1, num2);
	printf("%d\n", result);
	
	return 0;
}
