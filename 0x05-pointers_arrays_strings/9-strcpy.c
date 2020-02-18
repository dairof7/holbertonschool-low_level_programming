#include "holberton.h"
#include <stdio.h>
/**
 * *_strcpy - reverses a string
 * @dest: char array destiny
 * @src: array in
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;


	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
