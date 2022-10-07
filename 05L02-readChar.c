#include <stdio.h>

/**
 * main - read input from user
 */
int main(void)
{
	int ch, ch1, ch2;

	/** getc : gets only a single character **/
	/*
	printf("Please type in one character:\n");
	ch = getc(stdin);
	printf("The character you just entered is: %c\n", ch);
	*/

	/** using both getc and getchar **/
	printf("\nPlease type in two characters together:\n");
	ch1 = getc(stdin);
	ch2 = getchar();
	printf("The first character you just entered is: %c\n", ch1);
	printf("The second character you just entered is: %c\n", ch2);

	return 0;
}
