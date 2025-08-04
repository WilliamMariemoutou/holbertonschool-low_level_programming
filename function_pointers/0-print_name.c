#include "function_pointers.h"
#include <stdio.h>

void print_name(char *name, voit (*f)(char *));

{
	if (name != NULL && f != NULL)
		f(name);
}

Return(0)
