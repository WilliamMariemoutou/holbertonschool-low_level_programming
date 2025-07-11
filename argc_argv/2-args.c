#include <stdio.h>
#include "main.h"

/**
*main - prints all arguments it receives
*@argc: number of command line arguments
*@argv: arrray of arguments
*
*Return: Always 0 (Success)
*/
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}

return(0);
}
