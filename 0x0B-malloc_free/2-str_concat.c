#include <stdio.h>
#include <stdlib.h>

int _strlen(char *s);
/**
 * *str_concat - create array
 * @s1: input array
 * @s2: input array
 * Return: null in error
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, sizes1, sizes2, j = 0;
	char *str_;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	sizes1 = _strlen(s1);
	sizes2 = _strlen(s2);
	str_ = malloc((sizeof(char) * sizes1 + sizeof(char) * sizes2) + 1);
	if (sizes1 != 0 || sizes2 != 0)
	{
		while (i < sizes1)
		{
			*(str_ + i) = *(s1 + i);
			i++;
		}
		while (j < sizes2+1)
		{
			*(str_ + i) = *(s2 + j);
			j++;
			i++;
		}
	}
	else
		return (NULL);
	return (str_);
}

/**
 * _strlen - returns the length of a string
 * @s: char array pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
