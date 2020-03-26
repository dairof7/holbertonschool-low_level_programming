#include "holberton.h"
int _pow_recursion(int x, int y);
int _strlen(const char *s);
/**
 * binary_to_uint - conver a base 2 to base 10
 * @b: base 2 number
 * Return: return base 10 number or 0 in error
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1')
		{
			sum = sum << 1;
			sum = sum | 1;
		}
		else if (b[i] == '0')
			sum = sum << 1;
		else
			return (0);
		i++;
	}

	return (sum);
}
