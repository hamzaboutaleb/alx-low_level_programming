#include <stdio.h>
#include <stdlib.h>

/**
  * to_coins - minimum number of coins to make change for an amount of money.
  * @n: cents
  * Return: number of coins
  */
int to_coins(int n)
{
	int sum = 0, i;
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (n % coins[i] == 0)
		{
			sum += (n / coins[i]);
			n -= coins[i] * (n / coins[i]);
		}
	}
	return (sum);
}

/**
  * main - prints the minimum number of coins
  * @argc: numbero of args
  * @argv: array of args
  * Return: 0 || 1
  */

int main(int argc, char **argv)
{
	int cents, sum;

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

	sum = to_coins(cents);

	printf("%d\n", sum);
	return (0);
}
