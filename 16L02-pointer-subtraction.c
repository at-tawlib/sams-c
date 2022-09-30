/**
 * when you subtract one pointer value from the other, you get the distance between the memory locations.
 */
#include <stdio.h>

int main(void)
{
	int *ptr_int1, *ptr_int2;

	printf("The position of ptr_int1: %p\n", ptr_int1);
	ptr_int2 = ptr_int1 + 5;
	printf("The position of ptr_int2 = ptr_int1 + 5: %p\n", ptr_int2);
	printf("The subtraction of ptr_int2 - ptr_int1: %ld\n", ptr_int2 - ptr_int1);
	ptr_int2 = ptr_int1 - 5;
	printf("The position of ptr_int2 = ptr_int1 - 5: %p\n", ptr_int2);
	printf("The subtraction of ptr_int2 - ptr_int1: %ld\n", ptr_int2 - ptr_int1);

	return (0);
}
