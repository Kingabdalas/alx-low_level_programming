#include "main.h"
/**
 * isalpha - is to check if c is lower case or upper case
 * @c: is to chech
 * Return: 1 if is lowercase or uppercase otherwise return 0
 */

int _isalpha(int c)
{
	if ((c >= 'a'; && c <= 'z') || (c >= 'A'; && c <= 'Z'))
		return (1);
	else
		return (0);
}
