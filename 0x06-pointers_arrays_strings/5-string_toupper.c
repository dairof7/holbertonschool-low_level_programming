#include "holberton.h"
/**
 * string_toupper - lowercase to uppercase
 * Return: On success 1.
 * @t: array
 * On error, -1 is returned, and errno is set appropriately.
 */



char *string_toupper(char *t)
{
int i;
	for (i = 0; t[i] != '\0'; i++)
	{
		if ((t[i] >= 'a') && (t[i] <= 'z'))
			t[i] = t[i] - 32;
	}
	return (t);
}
