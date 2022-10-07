#include <stdio.h>
/**
 * main - entry point
 *
 * Adding multiple expression to for loop to print an addition table
 */
int main(void)
{
	int i,j;

	for (i = 0, j = 8; i < 8; i++, j--)
		printf("%d x %d = %d\n", i, j, i * j);
	
	return (0);
}
