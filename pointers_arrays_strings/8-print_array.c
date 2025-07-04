#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the array
 * @n: Number of elements to print
 *
 * Description: Numbers are printed in order, seperated by comma and space.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
