#include<stdio.h>
main ()
{
	  int week;
	   
	   printf("Enter your day Name:");
	   scanf("%d",&week);
	   
	   switch(week)
	   {
	    case 1:
		  	printf("Monday");
		  	break;
		  	
		 case 2:
		  	printf("Tuesday");
		  	break;
		  	 
	     case 3:
		  	printf("wednesday");
		  	break;
		  	
		case 4:
		  	printf("Thursday");
		  	break;
		  	
			  
	    case 5:
		  	printf("friday");
		  	break;
		  	
	    case 6:
		  	printf("Saturday");
		  	break;
		  	
	    case 7:
		  	printf("sunday");
		  	break;
		  	
		default:
		  		printf("Invalid day");	 	
}
	
}
