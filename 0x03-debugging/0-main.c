#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
* positive_or_negative - tests if integer i is positive or negative
* @i: holds the value
*/

void positive_or_negative(int i)
{
if (i > 0)
	printf("%d is positive\n", i);
else if (i == 0)
	printf("%d is zero\n", i);
else
	printf("%d is negative\n", i);
}
