#include "main.h"
#include <stdio.h>

/**
 * print_numbers - void function
 * Return: 0
 */

void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
