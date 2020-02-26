#include "holberton.h"
#include <stdio.h>
int pr(int n, int d);
/**
 * _sqrt_recursion - returns square root of n
 * @n: int number in
 * Return: the square root
 */
int is_prime_number(int n)
{
	if (n > 1)
		return (pr(n, 2));
	else
		return (0);
}

/**
 * sq - returns square root of n
 * @n: int number in
 * @d: the root square
 * Return: the square root
 */
int pr(int n, int d)
{
	if ((n % d == 0) && (n != d))
		return (0);
	else if ((n % d == 0) && (n == d))
		return(1);
	else
		return(pr(n, d + 1));
}
