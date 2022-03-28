#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search through
 * @needle: string to match
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	int nLen = 0;

	i = 0;
	j = 0;
	start = 0;

	while (needle[nLen] != '\0')
	{
	nLen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
	for (j = 0; j < nLen && haystack[i] == needle[j]; j++, i++)
	{
	if (j == 0)
	{
	start = i;
	}
	if (j == nLen - 1)
	{
	return (haystack + start);
	}
	}
	}
	return (0);
}
