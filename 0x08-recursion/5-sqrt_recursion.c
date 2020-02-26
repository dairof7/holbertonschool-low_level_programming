#include "holberton.h"
#include <stdio.h>
int sq(int n, int d);
/**
 * _sqrt_recursion - returns square root of n
 * @n: int number in
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (sq(n, 0));
}
/**
 * sq - returns square root of n
 * @n: int number in
 * @d: the root square
 * Return: the square root
 */
int sq(int n, int d)
{
	if (d * d == n)
		return (d);
	else if (d * d > n)
		return (-1);
	else
		return (sq(n, d + 1));
}
