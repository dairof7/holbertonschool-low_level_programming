#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - seachs string
 * @s: array in
 * @accept: char to search
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c = 0, sw = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		sw = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				sw = 1;
			}
		}
		if (sw == 0)
			break;
	}
	return (c);
}
