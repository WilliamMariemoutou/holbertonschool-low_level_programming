#include "main.h"

/**
* -strpbrk - searches a string for any of a set of bytes
*@s: the string to search
*@accept: the string of accepted characters
*
*Return: pointer to the first occurence in s of any byte in accept,
* or NULL if no such byte is found
*/
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (j = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0';  j++)
{
if s(s[i] == accept[j])
return (&s[i]);
}
}
return (0);
}
