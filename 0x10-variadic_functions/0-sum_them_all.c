#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all -  function that returns the sum of all its parameters.
 * @n: argument number
 * Return: the arguments sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int suma = 0;
	unsigned int i;

	va_start(list, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
			suma += va_arg(list, const unsigned int);
		va_end(list);
	}
	else
		return (0);
	return (suma);
}
