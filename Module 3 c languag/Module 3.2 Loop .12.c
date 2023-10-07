
#include <stdio.h>

 main()
{
    int num, sum=0, firstDigit, lastDigit;

    
    printf("Enter an Number: ");
    scanf("%d", &num);
    
  
    lastDigit = num % 10; 
    firstDigit = num;
  
    while(num >= 10)
    {
        num = num / 10;
    }
    firstDigit = num;

    sum = firstDigit + lastDigit; 

    printf("Sum of first and last digit = %d", sum);

   
}
