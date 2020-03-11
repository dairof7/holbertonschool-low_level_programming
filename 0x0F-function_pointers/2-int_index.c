#include <stdio.h>
/**
 * int_index -  function that searches for an integer.
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: return the position finded, -1 if size < 0 or if didnt find it
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if ((array == NULL) || (cmp == NULL) || (size <= 0))
		i = -1;
	else
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				break;
		}
		return (i);
	}
	return (-1);
}
