#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
*main - multiplies two numbers
*@argc: number of command line arguments
*@argv: array of command line arguments
*
*Return: 0 if success, 1 if error
*/
int main(int argc, char *argv[])
{
int i, sum = 0;

for (i = 1; i < argc; i++)
{
if (!is_number(argv[i]))
{
printf("Error\n");
return (1);
}
sum, += atoi(argv[i]);
}

printf("d\n", sum);
return (0);
}
