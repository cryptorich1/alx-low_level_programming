#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic
 * @c: the character to be check
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'z'))
			return (1);
	else
		return (0);
}
