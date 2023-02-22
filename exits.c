#include "driver.h"

/**
 **_strncpy - copies a string var
 *@dest: the destination string
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concat string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int itr, j;
	char *s = dest;

	itr = 0;
	while (src[itr] != '\0' && itr < n - 1)
	{
		dest[itr] = src[itr];
		itr++;
	}
	if (itr < n)
	{
		j = itr;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
