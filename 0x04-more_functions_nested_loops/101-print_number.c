#include "holberton.h"
/**
 * print_number - check the code for Holberton School students.
 * @n: is the number of lines to print
 * Return: Always 0.
 *
 *
 */
void print_number(int n)
{
	int a, b, c, d;

	if (n % 10 < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	a = n % 10;
	b = (n / 10) % 10;
	c = (n / 100) % 10;
	d = (n / 1000) % 10;
	if ((n > 0) && (n <= 9))
	{
		_putchar(a + '0');
	}
	else if ((n >= 10) && (n <= 99))
	{
		_putchar(b + '0');
		_putchar(a + '0');
	}
	else if ((n >= 100) && (n <= 999))
	{
		_putchar(c + '0');
		_putchar(b + '0');
		_putchar(a + '0');
	}
	else if ((n >= 1000) && (n <= 9999))
	{
		_putchar(d + '0');
		_putchar(c + '0');
		_putchar(b + '0');
		_putchar(a + '0');
	}
	else if (n == 0)
		_putchar('0');
}
