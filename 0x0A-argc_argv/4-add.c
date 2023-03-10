#include <stdio.h>
#include <stdlib.h>

/**
  * main - add numbers
  * @argc: number of args
  * @argc: array of args
  * Return : 0 || 1 (error)
  */

int main(int argc, char **argv)
{
	int i, sum, num;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}
	printf("%d", sum);
	return (0);
}
