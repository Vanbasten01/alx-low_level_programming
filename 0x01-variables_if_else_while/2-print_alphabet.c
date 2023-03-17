#include <stdio.h>
/**
 *main - Entry point
 *Description: "print the alphabet in lowercase, followed by a new line"
 *Return: Always 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
