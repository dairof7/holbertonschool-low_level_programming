#include "holberton.h"
/**
 * cap_string - capitalizes all words
 * Return: On success 1.
 * @t: array
 * On error, -1 is returned, and errno is set appropriately.
 */



char *cap_string(char *t)
{
int i;
	for (i = 0; t[i] != '\0'; i++)
	{
		if (t[i] == '\t')
			t[i] = ' ';
		if ((t[i] >= 'a') && (t[i] <= 'z') && ((t[i - 1] == ' ') ||
		(t[i - 1] == '\n') || (t[i - 1] == '.')))
			t[i] = t[i] - 32;
	}
	return (t);
}
