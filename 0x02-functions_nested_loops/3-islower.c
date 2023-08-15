#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: parameter to be checked
 * Return: 1(success) or 0(failure)
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
