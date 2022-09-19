#include <stdio.h>
#include <string.h>
/**
 * main - initializing strings
 * Return: always 0
 */
int main(void)
{
	char str1[] = {'A', ' ', 's', 't', 'r', 'i', 'n', 'g', ' ', 'c', 'o', 's', 't', 'a', 'n', 't', '\0'};
	char str2[] = "Another string constant";
	char *ptr_str;
	int i;

	/* print out str1 */
	for (i = 0; str1[i]; i++)
		printf("%c", str1[i]);

	printf("\n");

	/* print out str2 */
	for (i = 0; str2[i]; i++)
		printf("%c", str2[i]);
	printf("\n");

	/* assign a string to a pointer */
	ptr_str = "Assign a string to a pointer.";
	for (i = 0; *ptr_str; i++)
		printf("%c", *ptr_str++);
	printf("\n");

	char *ptr_str2 = "Assign a string to a pointer.";

	putchar(10);
	printf("The length of str1 is: %lu bytes\n", strlen(str1));
	printf("The length of str2 is: %lu bytes\n", strlen(str2));
	printf("The length of the string assigned to ptr_str is: %lu bytes\n", strlen(ptr_str2));

	return (0);
}
