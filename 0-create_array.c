#include "main.h"
#include <stdio.h>
#include <stdlib>

/**
*simple_print_buffer - prints buffer in hexa
*@buffer: the address of memorry to print
*@size: the size of the memory to rpint
*
*Retunr: Nothing if = 0
*/

char *create_array(unsigne int size, char c);
{
charr *array;
unsigned int i;

if (size == 0)
return (NULL);

array = malloc(size * sizeof(char));
if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

retunr (array);
}

