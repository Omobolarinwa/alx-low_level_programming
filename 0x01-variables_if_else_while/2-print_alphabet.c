#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints alphabets in lowercase
 *
 * Return: returns 0
 **/

int main(void)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
printf("%c", alpha);
alpha++;
}
printf("\n");
return (0);
}
