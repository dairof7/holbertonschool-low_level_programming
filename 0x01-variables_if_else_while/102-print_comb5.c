#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k, l, m, n;

	for (i = 0; i < 100; i++)
	{
		k = (i / 10) % 10;
		l = i % 10;
		for (j = 0; j < 100; j++)
		{
			m = (j / 10) % 10;
			n = j % 10;
			if (j > i)
			{
				putchar(k + '0');
				putchar(l + '0');
				putchar(32);
				putchar(m + '0');
				putchar(n + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
