#include <stdio.h>
/**
 * main - prints numbers to stdout
 * Descriptions: prints hexdecimals
 * Return: always return 0 (successful)
 */
int main(void)
{
	int numbers;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	{
		for (numbers = 'a'; numbers <= 'f'; numbers++)
			putchar(numbers);
	}
	putchar('\n');
	return (0);
}
