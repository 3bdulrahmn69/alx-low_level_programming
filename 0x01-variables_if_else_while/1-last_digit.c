#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>

/**
 * main - hey from main
 * Return: hey frim return
 */
int main(void)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if(last_digit > 5)
        {
                printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
        }
	else if(last_digit < 6 && last_digit != 0)
        {
                printf("Last digit of %d is %d and is less than 6 and not 0\n", );
        }
	else
        {
                printf("Last digit of %d is %d and is 0\n", );
        }	
        return (0);
}
