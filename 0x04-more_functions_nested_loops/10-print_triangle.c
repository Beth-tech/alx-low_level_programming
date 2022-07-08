#include "main.h"

/**
 * print_triangle - prints a triangle, folllowed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i >= size - j - 1)
				_putchar(35);
			else
				_putchar(32);
		}
		_putchar(10);

	}
	if (size <= 0)
	{
		_puchar(10);
	}
}
