#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - find and cut
 * @s: array in
 * @c: char to search
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		printf("%d",j);
		if (s[j] == c)
			return (s + j);
	}
	if (s[j] == '\0')
	{
			printf("%d",j);
		return (s + j);
	}
	return (0);
}
