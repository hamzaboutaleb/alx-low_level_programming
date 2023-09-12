#include "stdio.h"
#include "math.h"
#include "search_algos.h"

/**
 * min - min between two number
 * @a: number
 * @b: number
 * Return: smallest number
*/
int min(int a, int b)
{
		if (b > a)
			return (a);
		else
			return (b);
}

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
 * jump_search - Searches for a value in a sorted integer array
 * using the Jump Search algorithm.
 *
 * @array: Pointer to the sorted integer array.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 * Return: The index of the value in the array if found; otherwise, -1 if the
 *         value is not in the array.
*/

int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, next, end;

	step = sqrt(size);
	prev = next = 0;

	while (next < size && array[next] < value)
	{
		prev = next;
		next += step;
		print_checked(prev, array[prev]);
		if (prev >= size)
		{
			break;
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, next);
	end = min(next, size - 1);
	while (prev <= end)
	{
		print_checked(prev, array[prev]);
		if (array[prev] == value)
			return (prev);
		prev++;
	}

	return (-1);
}
