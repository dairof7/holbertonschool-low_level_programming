#include "holberton.h"

/**
 * print_sign - print sign of a number
 * @n: n contain the number to evaluate
 * Return: c
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
