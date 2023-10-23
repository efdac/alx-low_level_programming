#include <stdio.h>
#include "main.h"
/**
 *_memset - The _memset() function fills
 * @s: pointer that make you but the char
 * @b: the char you want to repeted it constant
 * @n: next byet
 *Return: returns new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{	unsigned int i;
	for (i = 0 ; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
