#include "holberton.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int v[3] = {a, b, c};
	int largest, i;

	for (i = 1; i <  3; i++)
	{
		largest = v[0];
		if (v[i] > largest)
			largest = v[i];
	}

	return (largest);
}
