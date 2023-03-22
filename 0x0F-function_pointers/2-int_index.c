/**
  * int_index - search for integer
  * @array: array to search in
  * @size: size of arrau
  * @cmp: function use to verfie
  * Return: index of elemnt or -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);

}
