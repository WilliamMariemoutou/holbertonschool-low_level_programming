#include"main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*_strdup - returns a pointer to a new duplicated string
*@str: the duplicated string
*
*Return: returns NULL if str is null or else 0
*/
char *_strdup(char *str);
{
char *copy;
int i, len = 0;

if (str == NULL)
return(NULL);

while (str[len] != '\0')
len++;

copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return(NULL);

for (i = 0; i < len; i++)
copy[i] = str[i];

copy[len] = '\0';

return (copy);
}

