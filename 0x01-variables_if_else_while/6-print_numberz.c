#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints the single numbers in base 10
 *
 * Return: returns 0
 **/

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
