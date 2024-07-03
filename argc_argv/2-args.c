#include"main.h"
#include<stdio.h>

/**
 * main - program examplifies the use of argc and argv
 * @argc: is an integer
 * @argv: is an array of character
 * Return: zero
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
