#include<stdio.h>
main()
{
	double first, second, temp;
	printf("Enter first number: ");
	scanf("if", &first);
	printf("Enter second number: ");
	scanf("if",&second);
	temp = first;
	first = second;
	second = temp;
	
	printf("\nAfter swapping, first number = %.2if\n",first);
	printf("After swapping, second number = %.2if", second);
	
}
