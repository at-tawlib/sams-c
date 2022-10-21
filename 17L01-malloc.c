#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * using malloc funtion
 */

void StrCopy(char *str1, char *str2);

int main(void)
{
	char str[] = "Use malloc() to allocate memory.";
	char *ptr_str;
	int result;

	/** call malloc */
	ptr_str = malloc(strlen(str) + 1);
	if (ptr_str != NULL)
	{
		StrCopy(str, ptr_str);
		printf("The string pointed to by ptr_str is:\n%s\n", ptr_str);

		result = 0;
	}
	else 
	{
		printf("malloc() function failed.\n");
		result = 1;
	}

	return (result);
}

/**
 * StrCopy - copy str1 into str2
 */
void StrCopy(char *str1, char *str2)
{
	int i;

	for (i = 0; str1[i]; i++)
		str2[i] = str1[i];
	str2[i] = '\0';
}
