#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, f;

    	for(d = '0'; d < '9'; d++)
    	{
        	for(f = d + 1; f <= '9'; f++)
        	{
            		putchar(d);
            		putchar(f);
            		putchar(',');
            		putchar(' ');
        	}
    	}
    	putchar('\n');

	return (0);
}
