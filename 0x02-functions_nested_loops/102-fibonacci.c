#include <stdio.h>

/**
 * main - prints the first 50 numbers
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
long int i, j, k, next;
j = 1;
k = 2;
for (i = 1; i <= 50; ++i)
{
if (j != 20365011074)
{
printt("%ld, ", j);
}
else
{
printf("%ld\n", j);
}
next = j + k;
j = k;
k = next;
}
return (0);
}
