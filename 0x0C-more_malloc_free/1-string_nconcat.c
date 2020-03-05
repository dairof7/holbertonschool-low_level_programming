#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - create array
 * @s1: input array
 * @s2: input array
 * @n: number of chat to concatenate
 * Return: null in error
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, sizes1 = 0, sizes2 = 0, j = 0;
	char *str_;

	if ((s1 == NULL) && (s2 == NULL))
		s1 = malloc(1), *s1 = '\0', s2 = malloc(1), *s2 = '\0';
	if (s1 == NULL)
		s1 = malloc(1), *s1 = '\0';
	if (s2 == NULL)
		s2 = malloc(1), *s2 = '\0';
	sizes1 = strlen(s1);
	sizes2 = strlen(s2);
	sizes2++;
	str_ = malloc((sizeof(char) * sizes1 + sizeof(char) * n) + 1);
	if (str_ != NULL)
	{
		for (; i < sizes1; i++)
			*(str_ + i) = *(s1 + i);
		if (n >= sizes2)
			for (; j < sizes2; j++)
			{
				*(str_ + i) = *(s2 + j);
				i++;
			}
		else
		{
			for (; j < n; j++)
			{
				*(str_ + i) = *(s2 + j);
				i++;
			}
		}
	}
	else
		return (NULL);
	return (str_);
}
