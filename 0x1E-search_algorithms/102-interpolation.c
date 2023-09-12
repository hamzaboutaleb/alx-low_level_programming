#include "stdio.h"
#include "search_algos.h"

/**
 * print_checked - Value checked array[x] = [x]
 * @idx: The number of elements in the array.
 * @value: The value to search for in the array.
*/
void print_checked(size_t idx, int value)
{
	printf("Value checked array[%ld] = [%d]\n", idx, value);
}


/**
 * get_position - get index using equation
 * @array: Pointer to the array
 * @low: low index
 * @high: hgih index
 * @value: the value to searc hfor in the array
 * Return: index
*/
size_t get_position(int *array, size_t low, size_t high, int value)
{
	double calc = (double)(high - low) / (array[high] - array[low]);
	size_t pos = low + (calc * (value - array[low]));

	return (pos);
}

/**
 * interpolation_search - Searches for a value in a sorted integer array using
 * the Interpolation Search algorithm.
 *
 * @array: Pointer to the sorted integer array.
 * @size: The number of elements in the array.
 * @val: The value to search for in the array.
 * Return: The index of the value in the array if found; otherwise, -1 if the
 *         value is not in the array.
 */
int interpolation_search(int *array, size_t size, int val)
{
	size_t low, high, mid;
	int element;

	low = 0;
	high = size - 1;

	while (low < high)
	{
		mid = get_position(array, low, high, val);
		if (mid > size)
		{
			printf("Value checked array[%ld] is out of range\n", mid);
			return (-1);
		}
		element = array[mid];
		print_checked(mid, element);

		if (val > element)
			low = mid + 1;
		else if (val < element)
			high = mid - 1;
		else
			return (mid);
	}

	return (-1);
}
