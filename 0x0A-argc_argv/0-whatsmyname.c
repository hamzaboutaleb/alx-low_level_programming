#include <stdio.h>
/**
  * main - print file name
  * @argc: length of args
  * @argv: array of args
  * Return: 0
  */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
