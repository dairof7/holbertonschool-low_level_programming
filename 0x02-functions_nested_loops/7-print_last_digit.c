#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: n contain the number to evaluate
 * Return: c
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = n * -1;
	_putchar (n + '0');
	return (n);
}


