<<<<<<< HEAD
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
=======
/*
 * File: 0-memset.c
 * Auth: not
 */

#include "main.h"

/**
*_memset - The _memset() function fills
* the first n bytes of the memory area
* pointed to by s with the constant byte b
*@s:target
*@b: constant byte
*@n:number of byte
*Return: returns new value of target
*/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
>>>>>>> ecf1902c0c2978c1c59957cf20ed50a2c933c73a
	}
	return (s);
}
