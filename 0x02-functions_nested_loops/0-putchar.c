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
char text[10] = "_putchar";
int i = 0;

for (i = 0; i < 9; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}
