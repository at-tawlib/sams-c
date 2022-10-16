#include <stdio.h>

/**
 * using array of pointers to acess an array of strings
 */
void StrPrint1(char **str1, int size);
void StrPrint2(char *str2);

int main(void)
{
	/** an array of strings i.e. double array */
	char *str[4] ={"There's music in the sighing of a read;",
					"There's music in the gushing of a rill;",
					"There's music in all things if men had ears;",
					"There earth is but an echo of the spheres.\n"
	};
	int i, size = 4;

	StrPrint1(str, size);
	for (i = 0; i < size; i++)
		StrPrint2(str[i]);

	return (0);
}

/**
 * StrPrint1 - prints the string
 */
void StrPrint1(char **str1, int size)
{
	int i;
	/** print all strings in an array of pointers to strings */
	for (i = 0; i < size; i++)
		printf("%s\n", str1[i]);

}

/**
 * StrPrint2 - prints string one at a time
 */
void StrPrint2(char *str2)
{
	/** prints one string at a time */
	printf("%s\n", str2);
}
