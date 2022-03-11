#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints lowercase alphabets in reverse
 *
 * Return: returns 0
 **/

int main(void)
{
char alpha;
alpha = 'z';
while (alpha >= 'a')
{
printf("%c", alpha);
alpha--;
}
printf("\n");
return (0);
}
