#include "main.h"

/**
 * print_most_numbers - prints most numbers from 0 - 9
 *
 * Return: returns 0.
 */

void print_most_numbers(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
if (num == '2' || num == '4')
continue;
else
_putchar(num);
}
_putchar('\n');
}
