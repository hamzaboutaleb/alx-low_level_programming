#include<stdio.h>

/**
  * main - entry point
  * Return: 0
  */
int main(void)
{
	char ch;

	for (ch = 'A'; ch <= 'z'; ch++)
	{
		if (ch > 'Z' && ch < 'a')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
