#include<stdio.h>

/**
  * main - entry point
  * Return: 0
  **/
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');

	return (0);
}
