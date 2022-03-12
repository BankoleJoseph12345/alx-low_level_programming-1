#include <stdio.h>
#include <unistd.h>
/**
 * main - All possible combinations of 2 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (!(a == a) && a < b)
			{
				putchar(a + '0');
				putchar(b + '0');

				if (!(a == 8 && b == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
