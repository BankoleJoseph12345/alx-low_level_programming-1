#include <stdio.h>
/**
 * main - Calculate largest prime 
 *
 * Return: 0
 */
int main(void)
{
	int main(void)
{
	long int x = 612852475143;
	long int py;

	for (py = 2; py < x; py++)
	{
		if (x % py == 0)
		{
			x = x / py;
		}
	}
	printf("%ld\n", py);
	return (0);
}
