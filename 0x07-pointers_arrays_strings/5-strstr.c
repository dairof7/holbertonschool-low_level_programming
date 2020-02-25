#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - search
 * @needle: array in
 * @haystack: arrayin
 * Return: pointer or zero.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j = 0, c = 0, s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; j < s; j++)
		{
			if (haystack[i + j] == needle[j])
				{
				c++;
			}
			else
				break;
		}
			if (c == s)
				return (haystack + i);
	}
	return (NULL);
}
