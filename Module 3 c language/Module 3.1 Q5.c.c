#include<stdio.h>
main ()
{
	 int year;
	 
	 printf("Enter a year:");
	 scanf("%d",&year);
	 
	 if(year%100==0 || year%400==0 || year%4==0)
     {
     	   printf("Leep year");
     	   
	 }
	 else 
	 {
	 	   printf("Not a leep year");
	 	   
	 }
}
