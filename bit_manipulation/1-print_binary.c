#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
*/
void print_binary(unsigned long int n)
{
    int i;
    unsigned long int mask = 1;
    int size = sizeof(unsigned long int) * 8;

    for (i = size - 1; i >= 0; i--)
    {
        if (n & (mask << i))
        {
            putchar('1');
        }
        else
        {
            putchar('0');
        }
    }
}