#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print numbers to stdout
 * Desciption: print the last digits of random numbers
 * Return: always 0 (successful)
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	lastNum = n % 10;
	if (lastNum > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastNum);
	} else if (lastNum < 6 && lastNum != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	} else
	{
		printf("lastNum digit of %d is %d and is 0\n", n, lastNum);
	}
	return (0);
}
