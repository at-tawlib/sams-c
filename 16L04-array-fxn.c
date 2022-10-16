#include <stdio.h>

/**
 * program shows how to pass an array of integers to a function
 */

int AddThree(int list[]);

int main(void)
{
	int sum, list[3];

	printf("Enter three integers separated by spaces:\n");
	scanf("%d%d%d", &list[0], &list[1], &list[2]); 
	sum = AddThree(list);
	printf("The sum of the three integers is: %d\n", sum);

	return (0);
}

/**
 * AddThree - adds three numbers
 * @list: list of the 3 numbers
 * Return: sum of the numbers
 */
int AddThree(int list[])
{
	int i;
	int result = 0;

	for (i = 0; i < 3; i++)
		result += list[i];
	return result;
}
