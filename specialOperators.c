#include <stdio.h>
/**
 * main - shows special operator (,) example
 * the first statement is executed and discarded, the second statement is executed and returned
 */
int main(void)
{
	int a;
	
	/* in this case, the printf is executed and the a is assigned to 2 */
	a = (printf("Jenny\n"), 2);
	printf("%d\n", a);

	putchar(10);
	a = printf("Jenny\n"), 2, 3;
	printf("%d\n", a);

	putchar(10);
	int a1 = 8, b;
	b = (a1++, ++a1);
	printf("a1 = %d, b = %d\n", a1, b);
	b = a++, ++a;
	printf("a1 = %d, b = %d\n", a1, b);


	return (0);
}
