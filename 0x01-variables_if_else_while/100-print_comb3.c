#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combination of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other functions (printf, puts, etc...) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int num1, num2;

	num1 = 48;
	num2 = 48;	
	
	while (num1 < 58)
        {
        	num2 = 48;
		while (num2 < 58)
                {
			if (num1 != num2 && num1 < num2)
			{
		        	putchar(num1);
				putchar(num2);
				if (num1 == 56 && num2 == 57)
					break;
				putchar(',');
		        	putchar(' ');		
		        }
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
