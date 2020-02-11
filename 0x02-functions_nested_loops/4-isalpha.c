#include "holberton.h"

/**
 * _isalpha - checks for letters.
 * @c: number to return one for letters and zero for others
 * Return: c
 */
int _isalpha(int c)
{
	if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122)))
		c = 1;
	else
		c = 0;
	return (c);
}

