#include "main.h"
/**
 * _isdigit - checks for a digit from 0 to 9
 *@c: char variable
 *Return: 0 to 1
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
