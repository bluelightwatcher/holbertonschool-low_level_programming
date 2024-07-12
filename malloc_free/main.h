#ifndef MYHEADER
#define MYHEADER
#include<stdlib.h>


char *str_concat(char *s1, char *s2);
void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
int _strlen(char *s);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
#endif
