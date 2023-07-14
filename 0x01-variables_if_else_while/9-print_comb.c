#include <stdio.h>
/**
  * main - Print all the numbers of base 16 in lowercase
  *
  * Return: Always 0
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
			putchar(',');
		}
		++i;
	}
	putchar('\n');
	return (0);
}
