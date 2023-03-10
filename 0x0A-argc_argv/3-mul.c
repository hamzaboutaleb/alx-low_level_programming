#include <stdio.h>
/**
  * main - print multiplcation of 2 number
  * @argc: number of args
  * @argv: arrya of args
  * Return: 0 || 1
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] + argv[2]);
	return (0);
}
