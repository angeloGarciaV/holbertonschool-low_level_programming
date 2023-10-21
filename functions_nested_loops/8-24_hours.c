#include <stdio.h>
#include "main.h"
/**
  * jack_bauer - uses a for loops to print hours and minutes.
  *
  * Return: 0
  */
void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	for (hr1 = 0; hr1 <= 2; hr1++)
	{
		for (hr2 = 0; hr2 < 4; hr2++)
		{
			for (min1 = 0; min1 <= 5; min1++)
			{
				for (min2 = 0; min2 <= 9; min2++)
				{
					printf("%d%d:%d%d\n", hr1, hr2, min1, min2);
				}
			}
		}
	}
}
