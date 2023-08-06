#include <stdio.h>
/*
   * Print : its name
   * Return : 0
   * main : argc argv
*/
int main(int argc, char *argv[])
{
printf("This is my name argv[]\n");
int i;
for (i = 0; i < argc; i++)
{
printf("argc[%d] = %s\n", i, argv[i]);
}
return (0);
}
