#include <stdio.h>
/**
 * main - entry point
 * Using precision specifies
 * %10.3f = the min field width length is 10 chars long and 3 decimal places
 * %3.8d = min field width is 3 and max field width is 8
 */
int main(void)
{
	int int_num, int_num2, int_num3;
	double fit_num;

	int_num = 123;
	int_num2 = 12;
	int_num3 = 123456789;
	fit_num = 123.456789;

	printf("Default integer format: %d\n", int_num);
	printf("With precision specifier: %2.8d\n", int_num);
	printf("Default integer format: %d\n", int_num2);
	printf("With precision specifier: %2.8d\n", int_num2);
	printf("Default integer format: %d\n", int_num3);
	printf("With precision specifier: %2.8d\n", int_num3);
	printf("Default float format: %f\n", fit_num);
	printf("With precision specifier: %-10.2f\n", fit_num);

	return (0);
}
