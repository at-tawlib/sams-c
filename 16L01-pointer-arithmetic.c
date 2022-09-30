/** Moving Pointers of Different Data types */
#include <stdio.h>

int main(void)
{
	char *ptr_ch;
	int *ptr_int;
	double *ptr_db;

	/** char pointer ptr_ch */
	printf("Current position of ptr_ch: %p\n", ptr_ch);
	printf("The positon after ptr_ch + 1: %p\n", ptr_ch + 1);
	printf("The positon after ptr_ch + 2: %p\n", ptr_ch + 2);
	printf("The positon after ptr_ch - 1: %p\n", ptr_ch - 1);
	printf("The positon after ptr_ch - 2: %p\n", ptr_ch - 2);

	/** int pointer ptr_int */
	printf("Current position of ptr_int: %p\n", ptr_int);
	printf("The position after ptr_int + 1: %p\n", ptr_int + 1);
	printf("The position after ptr_int + 2: %p\n", ptr_int + 2);
	printf("The position after ptr_int - 1: %p\n", ptr_int - 1);
	printf("The position after ptr_int - 2: %p\n", ptr_int - 2);

	/** double pointer ptr_db */
	printf("The position of ptr_db: %p\n", ptr_db);
	printf("The position after ptr_db + 1: %p\n", ptr_db + 1);
	printf("The position after ptr_db + 2: %p\n", ptr_db + 2);
	printf("The position after ptr_db - 1: %p\n", ptr_db - 1);
	printf("The position after ptr_db - 2: %p\n", ptr_db - 2);
	return (0);
}
