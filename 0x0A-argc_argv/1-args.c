#include <stdio.h>
/**
  * main - print number of args
  * @argc: number of args
  * @argv: array f args
  * Return: 0
  */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
