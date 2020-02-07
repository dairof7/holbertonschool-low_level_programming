#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, l;
	int k = 0;
	int m = 0;
	int x = 0;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49 + k; j <= 57; j++)
		{
			for (l = 50 + m; l <= 57; l++)
			{
			putchar(i);
			putchar(j);
			putchar(l);
				if (!((i == 55) && (j == 56) && (l == 57)))
				{
					putchar(',');
					putchar(' ');
				}
			}
		m++;
		}
		k++;
	x++;
	m = x;
	}
	putchar('\n');
	return (0);
}

