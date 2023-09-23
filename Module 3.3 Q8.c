#include <stdio.h>
//#include <string.h>

main()
{
	int i;
	
	char str[20];
	printf("Enter String (upto 20 characters length): ");
	scanf("%s", str);

	int strSize = strlen(str);
	if (strSize > 20) {
		printf("\nError: strSize should be less than 20 "
			"characters.");
	
	}

	char strReversed[20];
	for (i=strSize-1;i>=0;--i) {
		strReversed[strSize - 1 - i] = str[i];
	}

	if (strcmp(str, strReversed) == 0) {
		printf("\n%s is a palindrome", str);
	}
	else {
		printf("\n%s is not a palindrome", str);
	}

}

