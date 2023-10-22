#include <stdio.h>
#include "main.h"
/**
  * print_line - use for loop to print lines
  * @n: amount of lines to print
  */
void print_line(int n)
{
	while (n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
