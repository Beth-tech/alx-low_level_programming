#include "main.h"

/**
 * reverse_array -> reversing an array
 * @a: array a
 * @n: an element of an array
 */
void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
