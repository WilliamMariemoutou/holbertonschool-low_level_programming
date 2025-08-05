#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - Calls a function to print a name using a given format
 * @name: The name to print
 * @f: A pointer to the function that formats and prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
