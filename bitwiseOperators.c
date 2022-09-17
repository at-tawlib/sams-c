#include <stdio.h>
/**
 * main - entry point
 *
 * Demonstrate the use of Bitwise operators
 * print both decimal and hex (starts with 0X) values after bitwise operation
 */
int main(void)
{
	int x, y, z;

	x = 4321;
	y = 5678;
	printf("Given x = %u, i.e., 0X%04X\n", x, x);
	printf("	  y = %u, i.e., 0X%04X\n", y, y);
	
	z = x & y;
	printf("x & y returns: %6u, i.e., 0X%04X\n", z, z);

	z = x | y;
	printf("x | y returns: %6u, i.e., 0X%04X\n", z, z);

	z = x ^ y;
	printf("x ^ y returns: %6u, i.e., 0X%04X\n", z, z);

	printf("  -x returns: %6u, i.e., 0X%04X\n", -x, -x);


	return (0);
}
