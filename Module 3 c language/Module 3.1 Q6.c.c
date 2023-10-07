#include<stdio.h>
main ()
{
	 int day,year,month,d;
	 
	 	printf("Enter a number of day:");
	 	scanf("%d",&day);
		 
		 year=day/365;
		 month=(day%365)/30;
		 d=(day%365)%30;
		 
		 printf("years=%d\n month=%d \n days= %d",year,month,d);
		 	 
}
