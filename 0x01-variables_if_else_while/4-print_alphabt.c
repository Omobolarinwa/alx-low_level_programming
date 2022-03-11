#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints all alphabets but e & q
 * in lowercase
 *
 * Return: returns 0
 **/

int main(void)
{
char alpha;
alpha = 'a';
while (alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
{
printf("%c", alpha);
}
alpha++;
}
printf("\n");
return (0);
}
