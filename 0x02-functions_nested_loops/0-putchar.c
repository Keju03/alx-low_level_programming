#include <main.h>
#include <stdio.h>

/**
 * main - This program prints the phrase Hello, World
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; 1++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
