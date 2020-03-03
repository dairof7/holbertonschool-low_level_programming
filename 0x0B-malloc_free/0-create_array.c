#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array
 * @size: size of array
 * @c: char to writte in array
 * Return: null in error
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(c) * size);
	if (size != 0)
	{
		while (i < size)
		{
			*(str + i) = c;
			i++;
		}
	}
	else
		return (NULL);
	return (str);
}
