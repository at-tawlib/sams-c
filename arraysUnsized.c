#include <stdio.h>
/**
 * main - initializing unsized arrays
 * Return: 0
 */
int main(void)
{
	char array_ch[] = {'C', ' ', 'i', 's', ' ', 'p', 'o', 'w', 'e', 'r', 'f', 'u', 'l', '!', '\0'};

	int list_int[][3] = {
		1, 1, 1,
		1, 2, 8,
		3, 9, 27,
		4, 16, 64,
		5, 35, 125,
		6, 36, 216, 
		7, 49, 343};

	printf("The size of arrah_ch[] is %lu bytes.\n", sizeof(array_ch));
	printf("The size of list_int[][3] is %lu bytes.\n", sizeof(list_int));

	return (0);
}
