#include <stdio.h>
#include "main.h"
/**
  * main- print the name of the program
  * @argc: number of arguments
  * @argv: array of arguments
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
