#include <stdio.h>
#include <string.h>
/**
  * rev_string -function that prints a string in reverse.
  * @s:String to print.
  */
void rev_string(char *s)
{
	int i;
	int ing = strlen(s);
	int j = ing - 1;
	char k;

	for (i = 0; i < j; i++, j--)
	{
		k = s[i];
		s[i] = s[j];
		s[j] = k;
	}
}
