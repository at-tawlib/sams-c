#include <stdio.h>

/**
 * pointing to a function
 */

int StrPrint(char *str);

int main(void)
{
	char str[24] = "Pointing to a fuction.";
	int (*ptr)(char *str);

	ptr = StrPrint;
	if (!(*ptr)(str))
		printf("Done!\n");

	return (0);
}

/**
 * StrPrint - prints the string passed to it
 * @str: string to print
 * Return: always 0
 */
int StrPrint(char *str)
{
	printf("%s\n", str);
	return (0);
}
