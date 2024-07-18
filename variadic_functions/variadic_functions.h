#ifndef VARIADIC_HEADER
#define VARIADIC_HEADER
#include<stdio.h>
#include<stdarg.h>

void print_numbers(const char *separator, const unsigned int n, ...);
int sum_them_all(const unsigned int n, ...);

#endif
