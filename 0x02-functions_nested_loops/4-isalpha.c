#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: parameter to be checked
 * Return: 1(success) and 0(failure)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
