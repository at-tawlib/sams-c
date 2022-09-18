#include <stdio.h>
/**
 * main - list the left and right value (pointer address and content)
 *Return: 0 for success
*/
int main(void)
{
	char c;
	int x;
	float y;

	printf("c: address=%p, content=%c\n", &c, c);
	printf("c: address=%p, content=%d\n", &x, x);
	printf("c: address=%p, content=%5.2f\n", &y, y);

	c = 'A';
	x = 7;
	y = 123.45;

	putchar(10);
	printf("c: address=%p, content=%c\n", &c, c);
	printf("c: address=%p, content=%d\n", &x, x);
	printf("c: address=%p, content=%5.2f\n", &y, y);


	return (0);
}
