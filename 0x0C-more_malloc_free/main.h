#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
void *malloc_checked(unsigned int b);
int _strlen(char *s);
void errors(void);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
int *array_range(int min, int max);
void *_calloc(unsigned int nmeb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int is_digit(char *s);

#endif
