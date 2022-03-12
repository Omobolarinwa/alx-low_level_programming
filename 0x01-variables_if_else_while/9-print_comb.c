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
int i, j;
for(i = 0; i <= 9; i++)
{
for(j=0; j <= 9; j++)
{
printf("%d%d, ", i, j);
}
 }
 return (0);
}
