#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * print_alphabet_x10 - program function
 *
 * Description: Prints the alphabets 10X
 * Return: Always 0.
 */

void print_alphabet_x10(void) {
char alpha;
int times;

for (times = 0; times <= 9; times++){
for (alpha = 'a'; alpha <='z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
}
