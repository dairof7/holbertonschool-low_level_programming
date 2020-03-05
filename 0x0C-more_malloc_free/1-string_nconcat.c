#include <stdlib.h>
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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + sizes1))
		sizes1++;
	while (*(s2 + sizes2))
		sizes2++;
	if (n < sizes2)
		sizes2 = n;
	str_ = malloc((sizeof(char) * sizes1 + sizeof(char) * sizes2) + 1);
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
	str_[i] = '\0';
	return (str_);
}
