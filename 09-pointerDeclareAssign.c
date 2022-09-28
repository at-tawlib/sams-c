#include <stdio.h>
/**
 * main - declare assign values to pointers
 * Return: 0
 */
int main(void)
{
	char c, *ptr_c;
	int x, *ptr_x;
	float y, *ptr_y;

	c = 'A';
	x = 7;
	y = 123.45;

	/* print addresses and contents **/
	printf("c: address=%p, content=%c\n", &c, c);
	printf("x: address=%p, content=%d\n", &x, x);
	printf("y: address=%p, content=%5.2f\n", &y, y);

	putchar(10);
	ptr_c = &c;
	printf("ptr_c: address=%p, content=%p\n", &ptr_c, ptr_c);
	printf("*ptr_c => %c\n", *ptr_c);

	putchar(10);
	ptr_x = &x;
	printf("ptr_x: address=%p, content=%p\n", &ptr_x, ptr_x);
	printf("*ptr_x => %d\n", *ptr_x);

	putchar(10);
	ptr_y = &y;
	printf("ptr_y: address=%p, content=%p\n", &ptr_y, ptr_y);
	printf("*ptr_y => %5.2f\n", *ptr_y);

	return (0);
}
