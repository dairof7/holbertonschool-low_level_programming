#include "holberton.h"
/**
 * _isupper - check if a char is a uppercase alphabet letter
 * @c: char as integer
 * Return: Always 0.
 *
 *
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		c = 1;
	else
		c = 0;

	return (c);
}
