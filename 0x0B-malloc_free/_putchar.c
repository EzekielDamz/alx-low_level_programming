#include "main.h"
#include <unistd.h>
/**
  * _putchar - write the character c to stdout
  * @c: The charaacter to point
  *
  * Return: On success 1.
  * On error, -1 is returned, and arrno is set appropriately
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
