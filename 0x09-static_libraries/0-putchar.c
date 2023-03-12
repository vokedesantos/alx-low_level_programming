#include <unistd.h> 
 
/** 
 * _putchar - writes the character c to stdout 
 * @c: The character to print 
 * 
 * Return: On success 1. 
 * On error, -1 is returned, and errno is set appropriately. 
 */ 
int _putchar(char c) 
{ 
 return (write(1, &c, 1)); 
} 




============================


0-isupper.c
		
#include "main.h"
/**
 * _isupper - uppercase letters
 * @c: char to check
 *
 * Return: 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
	return (0);
}
 

