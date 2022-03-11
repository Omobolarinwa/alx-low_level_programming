#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: a program that prints alphabets in lowercase,
 * and then uppercase followed by new line
 *
 * Return: returns 0
 **/

int main(void)
{
char alpha;
char upper;
alpha = 'a';
upper = 'A';

while (alpha <= 'z')
{
printf("%c", alpha);
alpha++;
}

while (upper <= 'Z')
{
printf("%c", upper);
upper++;
}
printf("\n");
return (0);
}
