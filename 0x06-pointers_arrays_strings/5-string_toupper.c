#include "main.h"

/**
 * string_toupper -> converting any string to upper case
 * @a: string param
 * Return: string
 */
char *string_toupper(char *a)
{
	int j;

	for (j = 0; a[j] != '\0'; j++)
	{
		if (a[j] >= 'a' && a[j] <= 'z')
			a[j] = a[j] - 32;
	}

	return (a);
}
