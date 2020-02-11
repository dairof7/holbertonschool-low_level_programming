#include "holberton.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: n contain the number to evaluate
 * Return: c
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
		return (n);
	}
	else
	return (n);
}
