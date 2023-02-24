#include "main.h"

/**
 *_isupper - check if a letter is uppercase
 *@c: char to check c
 * Return: 1 for uppercase or 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
