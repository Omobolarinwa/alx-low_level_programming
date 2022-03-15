#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * 
 * Description: A program that prints aphabets in small letter
 *
 * Return: Always 0.
 */

int print_alphabet();

int main(void)
{
print_alphabet();
return (0);
}

int print_alphabet() {
char alpha;

for (alpha = 'a'; alpha <='z'; alpha++)
{
putchar(alpha);
}
putchar('\n');
}
