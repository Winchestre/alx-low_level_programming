#ifndef _FUMCTION_POINTERS_
#define _FUNCTION_POINTERS_

#include <stddef.h>
#include <stdlib.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif