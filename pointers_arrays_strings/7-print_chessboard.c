#include <stdio.h>
/**
  * print_chessboard - Function that prints a chess board
  * @a: ejrbjnekrjn
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j < 7)
			{
				putchar (' ');
			}
		}
		putchar ('\n');

	}
}
