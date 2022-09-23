#include <stdio.h>

/**
 *  * main - Entry point
 *   * Description: digit numbers of base 10 starting from 0
 *    * Return:  Always 0 (success)
*/
int main(void)
{
	int ch = '0';
	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
