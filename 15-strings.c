#include <stdio.h>
#include <string.h>
/**
 * main - initializing strings, printing string, string length, string copy, scanf()
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

	putchar(10);
	/** string copy **/
	char str_cpy1[] = "Copy a string.";
	char str_cpy2[15];
	char str_cpy3[15];

	/** with strcpy **/
	strcpy(str_cpy2, str_cpy1);

	/** without strcpy() **/
	for (i = 0; str1[i]; i++)
		str_cpy3[i] = str_cpy1[i];
	str_cpy3[i] = '\0';

	/* display str_cp2 and str_cpy3 */
	printf("The content of str_cpy2 using strcpy: %s\n", str_cpy2);
	printf("The content of str_cpy3 without using strcpy: %s\n", str_cpy3);

	putchar(10);
	/** using scanf() **/
	char strng[80];
	int m, n;
	float q;

	printf("Enter two integers separated by a space:\n");
	scanf("%d %d", &m, &n);
	printf("Enter a floating-point number:\n");
	scanf("%f", &q);
	printf("Enter a string:\n");
	scanf("%s", strng);
	printf("Here are what you've entered:\n");
	printf("%d  %d\n%f\n%s\n", m, n, q, strng);

	return (0);
}
