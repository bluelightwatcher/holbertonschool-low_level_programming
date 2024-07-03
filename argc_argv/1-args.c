#include"main.h"
#include<stdio.h>

/**
 * main - program examplifies the use of argc and argv
 * @argc: is an integer
 * @argv: is an array of character
 * Return: zero
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", (argc - 1));
	return (0);
}
