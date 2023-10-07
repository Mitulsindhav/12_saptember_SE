#include<stdio.h>
main ()
{
	int a,b,option;
	
	printf("Enter a first number:");
	scanf("%d",&a);
	
	printf("Enter a second number:");
	scanf("%d",&b);

     printf("Enter your choise:");
     scanf("%d",&option);

     	switch(option)
     	{
     		 case 1:
     		 	 printf("Addition= %d",a+b);
     		 	 break;
     		 case 2:
     		 	 printf("Subtrection= %d",a-b);
     		 	 break;
				   
		      case 3:
     		 	 printf("Multiplication= %d",a*b);
     		 	 break;
		   case 4:
     		 	 printf("Division= %d",a/b);
     		 	 break;		   		    	 
     		 	 
     		case 5:
     		 	 printf("Modulo= %d",a%b);
     		 	 break;
     		 	 
     		 	 default:
     		 	 	printf("Invalid choise");
     		 	 	
		 }
	 
	 
}
