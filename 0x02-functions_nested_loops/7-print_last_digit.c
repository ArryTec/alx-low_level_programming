#include "main.h"
/**
 * main - prints the last digit of a number
 * @n: use an int for task
 * Returns: the value of the last digit
 */

int print_last_digit(int)
{
	int num;

	        num = n % 10;	
	if (num < 0)
		num = num * -1;

	_putchar(num + '0');
	return (num);
}
