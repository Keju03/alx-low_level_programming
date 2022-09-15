#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point print the letters of the alphabet
 *
 * Description: print the letters of the alphabet in the lower then in the uppercase
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
