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

        for (i = ing - 1; i >= 0; i--)
        {
                putchar(s[i]);
        }
        putchar('\n');
}
