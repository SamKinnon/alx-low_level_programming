#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));



#endif