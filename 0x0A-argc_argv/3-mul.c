#include <stdio.h>
#include <stdlib.h>

/**
  * main - print multiplcation of 2 number
  * @argc: number of args
  * @argv: arrya of args
  * Return: 0 || 1
  */
int main(int argc, char **argv)
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
