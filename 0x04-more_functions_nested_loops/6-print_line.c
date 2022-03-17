#include "main.h"
#include <stdio.h>

/**
 * print_line - Print a straight line
 * @n: number of - characters
 * Return: 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}
}
