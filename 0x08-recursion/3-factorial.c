#include "holberton.h"
/**
 * factorial - return the factorial of a number
 * @n: number in
 * Return: return n as the factorial
 */
int factorial(int n)
{

	if (n == 0)
		n = 1;
	else if (n > 0)
		n = n * factorial(n - 1);
	else
		n = -1;

	return (n);
}
