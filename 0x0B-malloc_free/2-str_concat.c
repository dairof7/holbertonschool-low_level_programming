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
	{
		s1 = malloc(1);
		*s1 = '\0';
		s2 = malloc(1);
		*s2 = '\0';
	}
	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	while (*(s1 + sizes1))
		sizes1++;
	while (*(s2 + sizes2))
		sizes2++;
	sizes2++;
	str_ = malloc((sizeof(char) * sizes1 + sizeof(char) * sizes2));
	if (str_ != NULL)
	{
		for (; i < sizes1; i++)
			*(str_ + i) = *(s1 + i);
		for (; j < sizes2; j++)
		{
			*(str_ + i) = *(s2 + j);
			i++;
		}
	}
	else
		return (NULL);
	return (str_);
}
