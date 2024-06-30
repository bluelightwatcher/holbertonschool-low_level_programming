#include"main.h"
#include<stdio.h>

/**
 * reverse_array - reverses an array between the start and the n number
 * @arr: is an array
 * @n: is an integer
 * Return: void
 */

void reverse_array(int *arr, int n)
{
	int *end = &arr[n - 1];
	int temp;

	while (arr < end)
	{
		temp = *end;
		*end = *arr;
		*arr = temp;
		end--;
		arr++;
	}
}
