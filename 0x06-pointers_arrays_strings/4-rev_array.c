#include "holberton.h"
/**
 * reverse_array - reverse function
 * @a: char array pointer
 * @n: size of array
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i, buff;

	n--;
	for (i = 0; i <= n / 2; i++)
	{
		buff = a[n - i];
		a[n - i] = a[i];
		a[i] = buff;
	}
}

