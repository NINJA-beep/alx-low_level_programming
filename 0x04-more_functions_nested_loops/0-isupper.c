#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * @x: The number to be checked
 * Return: 1 for upper case 0 otherwise
 */
int _isupper(int x)
{
	if (x>=65 && x<= 90)
	{
		return (1);
	}else 
	{
		return (0);
	}
}