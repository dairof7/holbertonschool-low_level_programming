#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: number to return one for lowercase and zero for  others
 * Return: c
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		c = 1;
	else
		c = 0;
	return (c);
}
