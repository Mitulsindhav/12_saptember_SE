#include<stdio.h>

struct employee
{
	  
	  int emp_no;
	  char emp_name[30];
	  char emp_address[30];
	  int emp_age;
	  
}employee[5];
    int i;
main ()
     
	 {
	 for (i=0;i<5;i++)
	 {
	 	 printf("Enter the employee number:\n");
	 	 scanf("%d",&employee[i].emp_no);
	 	 
	 	 printf("Enter the employee name:\n");
	 	 scanf("%s",&employee[i].emp_name);
	 	 
	 	 printf("Enter the employee Address:\n");
	 	 scanf("%s",&employee[i].emp_address);
	 	 
	 	 printf("Enter the employee Age:\n");
	 	 scanf("%d",&employee[i].emp_age);
	 	 
	 }
	 for( i=0;i<5;i++)
	 {
	 	printf("emp_no %d\n",employee[i].emp_no);
	 	printf("emp_name %s\n",employee[i].emp_name);
	 	printf("emp_address %s\n",employee[i].emp_address);
	 	printf("emp_age %d\n",employee[i].emp_age);
	 	
	 	printf("-------------------------------");
	 	

	 }
}
