#include <stdio.h>
/**
 *main - Entry point
 *Description: "print all possible different combinations of two digits"
 *Return: Always 0
 */
int main(void)
{
	int a = 48;
	int b = 48;

	while (a <= 57)
	{
		while (b <= 57)
		{
			if (!(a > b || a == b))
			{
				putchar(a);
				putchar(b);
				if (a == 56 && b == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			b++;
		}
		b = 48;
		a++;
	}
	return (0);
}
