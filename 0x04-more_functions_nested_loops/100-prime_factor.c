Mickabtech
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
Insights
alx-low_level_programming/0x04-more_functions_nested_loops/100-prime_factor.c
@Mickabtech
Mickabtech 100-prime_factor.c
 1 contributor
 Executable File  31 lines (29 sloc)  332 Bytes
#include "stdio.h"
 /**
  *  * main - largest prime factor of 612852475143
  *   *
  *    * Return: 0
*/
 int main(void)
{
	long int x, i, pf;

	pf = -1;
	x = 612852475143;

	while (x % 2 == 0)
	{
		pf = 2;
		x = x / 2;
	}
	for (i = 3; i <= x / 2; i = i + 2)
	{
		while (x % i == 0)
		{
			pf = i;
			x = x / i;
		}
	}
	if (x > 2)
		pf = x;
	printf("%ld\n", pf);
	return (0);
}
