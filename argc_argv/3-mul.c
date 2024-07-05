#include"main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 * main - program multiplies 2 arguments passed to it.
 * @argc: is an integer
 * @argv: is an array of character
 * Return: zero
 */

int main(int argc, char *argv[])
{
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{

		int uno = atoi(argv[1]);
		int dos = atoi(argv[2]);

		printf("%d\n", (uno * dos));
		return (0);
	}
}
