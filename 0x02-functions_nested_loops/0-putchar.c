#include <stdio.h>
#include "main.h"

/**
 * main -Entry point
 *
 * Description: A program that prints _putchar and new line
 *
 * Return: returns 0
 **/

int main(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
	_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
