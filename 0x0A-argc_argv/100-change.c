#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change for an amount of money
  * @argc: numbero of args
  * @argv: array of args
  * Return: 0 || 1
  */

int main(int argc, char **argv)
{
	int cents, i, sum;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		puts("0");
		return (0);
	}
	
	while (cents != 0)
	{
		if (cents % 25 == 0)
		{
			sum++;
			cents -= 25;
		}
		else if (cents % 10 == 0)
		{
			sum++;
			cents -= 10;
		}
		else if (cents % 5 == 0)
		{
			sum++;
			cents -= 5;
		}
		else if (cents % 2 == 0)
		{
			sum++;
			cents -= 2;
		}
		else
		{
			sum++;
			cents--;
		}
	}
	printf("%d\n", sum);
	return (0);
}
