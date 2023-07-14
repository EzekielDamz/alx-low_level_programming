#include <stdio.h>
#include <ctype.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{
int lowerCase = 'a';
int upperCase = 'A';
while (lowerCase <= 'z')
{
putchar(lowerCase);
lowerCase += 1;
}
while (upperCase <= 'z')
{
putchar(upperCase);
upperCase += 1;
}
putchar('\n');
return (0);
}
