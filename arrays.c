#include <stdio.h>
/**
 * main - initializing an array and getting size of array
 * Return: 0
 */
int main(void)
{
	int i;
	int list_int[10];
	int total_byte;
	int *ptr_int;

	for (i = 0; i < 10; i++)
	{
		list_int[i] = i + 1;
		printf("list_int[%d] is initialized with %d.\n", i, list_int[i]);
	}

	/** NB: the distance between first element and last element is the total_byte of array (inclusive from first element). The address is used to calculate the distance (address is a hexadecimal value **/
	putchar(10);
	total_byte = sizeof(int) * 10;
	printf("The size of int is %lu-byte long.\n", sizeof(int));
	printf("The array of 10 ints has total %d bytes.\n", total_byte);
	printf("The address of the first element: %p\n", &list_int[0]);
	printf("The address of the last element: %p\n", &list_int[9]);

	putchar(10);
	ptr_int = list_int;
	printf("Referencing arrays with a pointer\n");
	printf("The start address of the array : %p\n", ptr_int);
	printf("The value of the first element: %d\n", *ptr_int);

	ptr_int = &list_int[0];
	printf("The address of the first element: %p\n", ptr_int);
	printf("The value of the first element: %d\n", *ptr_int);

	putchar(10);
	printf("Array of Characters.\n");
	char array_ch[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	
	for (i = 0; i < 7; i++)
		printf("array_c[%d] contains: %c\n", i, array_ch[i]);

	/*--- method I ---*/
	printf("Put all elements together (Method I):\n");
	for (i = 0; array_ch[i] != '\0' && i < 7; i++)
		printf("%c", array_ch[i]);

	/*-- method II --*/
	printf("\nPut all elements together (Method II):\n");
	printf("%s\n", array_ch);
	
	putchar(10);
	printf("Using the Null Character ('\\0')\n");
	char array_char[15] = {'C', ' ', 'i', 's', ' ', 'p', 'o', 'w', 'e', 'r', 'f', 'u', 'l', '!', '\0'};

	/* array_char[i] in logical test */
	for (i = 0; array_char[i]; i++)
		printf("%c", array_char[i]);
	printf("\n");

	return (0);
}
