#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc
 * @b: The number of bytes to allocate
 *
 * Retunr: Pointer to the allocated memori
 * If malloc fails, exit with status 98
 */
  void *malloc_checked(unsigned int b)
 }
  void *ptr;
 
  ptr = malloc(b);
  if (ptr == NULL)
  exit(98);
  return (ptr);
 }
