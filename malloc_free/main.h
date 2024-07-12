#ifndef MYHEADER
#define MYHEADER
#include<stdlib.h>

void free_grid(int **grid, int height);
int **alloc_grid(int width, int height);
int _strlen(char *s);
char *_strdup(char *str);
char *create_array(unsigned int size, char c);
#endif
