#include "holberton.h"
/**
 * times_table - prints tables 9 times
 */
void times_table(void)
{
	int j, k, res;

	for (j = 0; j <= 9; j++)
	{
		for (k = 0; k <= 9; k++)
		{
			res = j * k;
			if (k == 0)
			{
				_putchar('0');
			}
			else
			{
				if ((res / 10) == 0)
				{
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else
				{
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
			}
			if (k != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	_putchar('\n');
	}
}


