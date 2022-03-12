#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all possinle combinations
 * of single-digit number
 *
 * Return: returns 0
 **/

int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}

	putchar(10);

	return (0);
}
