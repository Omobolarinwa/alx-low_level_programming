#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabets in lower case
 *
 * Return: void
 */

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
