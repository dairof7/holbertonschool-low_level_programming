#include "holberton.h"
/**
 * _strlen_recursion - print string recursive in reverse
 * @s: string
 * Return: return n as the len of string
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s != '\0')
	{
		n = _strlen_recursion(s + 1);
		n++;
	}
	return (n);
}
