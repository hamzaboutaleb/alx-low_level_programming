#include "stdio.h"
#include "search_algos.h"

/**
 * print_info - print Value checked array[idx] = [value]
 * @idx: index of element
 * @value: value at the index
*/
void print_info(size_t idx, int value)
{
	printf("Value checked array[%ld] = [%d]\n", idx, value);
}

/**
 * linear_search - Search for an integer value in an integer array.
 * @array: Pointer to the integer array to be searched.
 * @size: The number of elements in the 'array'.
 * @value: The integer value to search for.
 * Return: The index of the first occurrence of 'value' in the 'array'
 * if found, or -1 if 'value' is not present in the array.
*/

int linear_search(int *array, size_t size, int value)
{
	int element;
	size_t idx;

	for (idx = 0; idx < size; idx++)
	{
		element = array[idx];

		print_info(idx, element);
		if (element == value)
			return (idx);
	}

	return (-1);
}

