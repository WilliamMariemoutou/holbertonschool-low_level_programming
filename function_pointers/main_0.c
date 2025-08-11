#include "function_pointers.h"
#include <stdio.h>

/**
 * print_elem - prints an integer followed by a new line
 * @elem: the integer to print
 *
 * Description: Prints the integer value of elem to stdout.
 */
void print_elem(int elem)
{
	printf("%d\n", elem);
}

/**
 * main - entry point to test array_iterator
 *
 * Description: Creates an array and passes it to array_iterator with print_elem.
 *
 * Return: Always 0.
 */
int main(void)
{
	int array[5] = {0, 98, 402, 1024, 4096};

	array_iterator(array, 5, &print_elem);
	return (0);
}
