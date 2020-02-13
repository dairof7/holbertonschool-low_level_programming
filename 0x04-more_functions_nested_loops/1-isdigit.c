#include "holberton.h"
/**
 * _isdigit - check if a chat is a digit 0 to 9.
 * @c: char as a integer
 * Return: Always 0.
 *
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		c = 1;
	else
		c = 0;

	return (c);
}
