#include <stdio.h>
#include "function_pointers.h"

/*print_name - Calls a function to print a name using a given format
 * @name - The name to print
 * @f: a pointer to the function and it prints the name
 *
 * Return: Nothing
 */

void print_name(char *name, void(*f)(char*))
{
	if (name != NULL && f != NULL)
		f(name);
}

Return (0)
