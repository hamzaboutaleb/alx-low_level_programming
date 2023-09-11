#include "stdio.h"
#include "search_algos.h"

/**
 * print_array - print array between start and end
 * @array: pointer to array
 * @start: start index
 * @end: end index
*/

void print_array(int *array, size_t start, size_t end)
{
	int flag, element;
	size_t idx;

	flag = 0;
	printf("Searching in array: ");
	for (idx = start; idx <= end; idx++)
	{
		element = array[idx];
		if (flag == 1)
			printf(", ");
		if (flag == 0)
			flag = 1;
		printf("%d", element);
	}
	printf("\n");
}

/**
 * binary_search - Search for an integer value in an integer array.
 * @array: Pointer to the integer array to be searched.
 * @size: The number of elements in the 'array'.
 * @value: The integer value to search for.
 * Return: The index of the first occurrence of 'value' in the 'array'
 * if found, or -1 if 'value' is not present in the array.
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, middle;
	int element;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (right + left) / 2;
		element = array[middle];
		if (element > value)
			right = middle - 1;
		else if (element < value)
			left = middle + 1;
		else
			return (middle);
	}
	return (-1);
}
