#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
✅ Add Prototype in main.h
c
Copy
Edit
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int add(int, int);
void print_to_98(int n);

#endif /* MAIN_H */
