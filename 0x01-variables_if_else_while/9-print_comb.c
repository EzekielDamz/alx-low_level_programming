#include <stdio.h>
/**
  * main - Print all possible combinations of single digit numbers
  *
  * Return: 0 on success
  */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		+ii;
	}
	putchar('\n');
	return (0);
}
