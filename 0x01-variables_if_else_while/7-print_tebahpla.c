#include<stdio.h>

/**
  * main - entry poitn
  * Return: 0
  */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);

	putchar('\n');
	return (0);
}
