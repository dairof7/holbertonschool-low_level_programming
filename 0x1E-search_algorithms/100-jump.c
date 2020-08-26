#include "search_algos.h"

/**
 * jump_search - search for a number using jump search algorithm
 * @array: input array
 * @size: the size of the array
 * @value: the value to seaach
 * Return: index of the founded value, or -1 when the values is not present
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int step = sqrt(size);
	unsigned int prev = 0, current;

	if (array == NULL)
		return (-1);
	current = step;
	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (array[current] < value)
	{
		prev = current;
		current = current + step;
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (prev >= size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, current);
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
			return (-1);
		}
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, current);
	while (array[prev] <= value)
	{
		if (array[prev] == value)
		{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		return (prev);
		}
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev >= size)
		{
			return (-1);
		}

	}
	return (-1);
}

