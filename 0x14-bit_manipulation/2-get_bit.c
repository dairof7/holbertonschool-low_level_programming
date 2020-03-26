#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: base 10 number
 * @index: index to search
 * Return: return the value of bit or -1 in error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int cleaner, cleared;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);
	/*'1' moved index times*/
	cleaner = 1 << index;
	cleared = cleaner & n;

	if (cleaner == cleared)
		return (1);
	return (0);
}
