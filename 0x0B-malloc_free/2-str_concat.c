#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat - create array
 * @s1: input array
 * @s2: input array
 * Return: null in error
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, sizes1 = 0, sizes2 = 0, j = 0;
	char *str_;

	if ((s1 == NULL) && (s2 == NULL))
		return (NULL);
	else if (s1 == NULL)
		*s1 = '\0';
	else if (s1 == NULL)
		*s2 = '\0';
	while (*(s1 + sizes1))
		sizes1++;
	while (*(s2 + sizes2))
		sizes2++;
	sizes2++;

	str_ = malloc((sizeof(char) * sizes1 + sizeof(char) * sizes2) + 1);
	if (sizes1 != 0 || sizes2 != 0)
	{
		while (i < sizes1)
		{
			*(str_ + i) = *(s1 + i);
			i++;
		}
		while (j < sizes2)
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
