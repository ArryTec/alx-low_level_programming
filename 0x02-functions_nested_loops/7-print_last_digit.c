#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @num: number's last digit result
 * Return: value of the last digit
 */

int print_last_digit(int num)
{
	int num;

	num = (num % 10);

	if (num < 0)
	{
		num = (-1 * num);
	}

	_putchar(num + '0');
	return (num);
}
