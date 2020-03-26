#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: base 10 number
 * @index: index to search
 * Return: return the value of bit or -1 in error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, max;

	max = (sizeof(unsigned long int) * 8 - 1);
	if (index > max)
		return (-1);

	if (n == 0 && index == 0)
		return (0);
	while (n != 0)
	{
		if (i == index)
			return (n & 1);
		n = n >> 1;
		i++;
	}
	if (i <= index)
		return (-1);

	return (-1);
}
