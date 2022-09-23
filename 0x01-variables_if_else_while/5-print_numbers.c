#include <stdio.h>
/**
 *  * main - Entry point
 *   * Description: digit numbers of base 10 starting from 0
 *    * Return: Always  0 (success)
*/
int main(void)
{
	int count = 0;

	while (count < 10)
		printf("%d", count++);
	printf("\n");
	return (0);
}
