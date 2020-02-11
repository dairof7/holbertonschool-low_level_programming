#include "holberton.h"
/**
 * print_times_table - prints tables 9 times
 * @n: integer number
 */
void print_times_table(int n)
{
	int j, k, res;

	if ((n <= 15) && (n > 0))
	{
	for (j = 0; j <= n; j++)
	{
		for (k = 0; k <= n; k++)
		{
			res = j * k;
			if (res < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(res % 10 + '0');
			}
			else if (res < 100)
			{
				_putchar(' ');
				_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar((res / 100) + '0');
				_putchar(((res / 10) % 10) + '0');
				_putchar((res % 10) + '0');
			}

			if (k != n)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}

}
