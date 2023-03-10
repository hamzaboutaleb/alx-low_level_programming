#include <stdio.h>
#include <stdlib.h>

/**
  * is_num - check if string is number
  * @s: string to check
  * Return: 0 || 1
  */
int is_num(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!(s[i] >= '1') && !(s[i] <= '9'))
			return (0);
	}

	return (1);
}

/**
  * main - add numbers
  * @argc: number of args
  * @argc: array of args
  * Return : 0 || 1 (error)
  */

int main(int argc, char **argv)
{
	int i, sum, num;
	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (is_num(argv[i]) == 0)
		{
			printf("Error");
			return (1);
		}
		num = atoi(argv[i]);
		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
