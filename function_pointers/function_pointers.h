#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/**
 * array_iterator - executes a function on each element of an array
 * @array: pointer to the array
 * @size: number of elements in the array
 * @action: pointer to the function to be used
 */

void array_iterator(int *array, size_t size, void (*action)(int));

#endif
