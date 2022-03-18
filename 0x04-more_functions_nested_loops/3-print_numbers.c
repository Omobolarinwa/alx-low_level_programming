#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9, then newline
 *
 * Return: returns 0.
 */

void print_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
