#include <stdio.h>
/**
 *  * main - Entry point
 *   * Description: a program that prints the alphabet in lowercase.
 *    * Return: Always 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char upper_ch = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (upper_ch = 'A'; upper_ch <= 'Z'; upper_ch++)
		putchar(upper_ch);
	putchar('\n');
	return (0);
}
