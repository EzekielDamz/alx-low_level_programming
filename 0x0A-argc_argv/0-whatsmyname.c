#include <stdio.h>
#include "main.h"
/**
  * main - print program name
  * @argc: Argument count
  * @argv: Argument vector
  *
  * Return: 0
  **/
int main(int argc __attribute__((unused)), char *argv[])
{
	(void)argc;
	printf("%s\n", *argv);
	return (0);
}
