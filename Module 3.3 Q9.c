#include<stdio.h>

struct employee
{
	  
	  int emp_no;
	  char emp_name[30];
	  char emp_address[30];
	  int emp_age;
	  
}employee;
    
main ()
{

     
	 
	 
	 	 printf("Enter the employee number:\n");
	 	 scanf("%d",&employee.emp_no);
	 	 
	 	 printf("Enter the employee name:\n");
	 	 scanf("%s",&employee.emp_name);
	 	 
	 	 printf("Enter the employee Address:\n");
	 	 scanf("%s",&employee.emp_address);
	 	 
	 	 printf("Enter the employee Age:\n");
	 	 scanf("%d",&employee.emp_age);
	 	 

	 	printf("emp_no %d\n",employee.emp_no);
	 	printf("emp_name %s\n",employee.emp_name);
	 	printf("emp_address %s\n",employee.emp_address);
	 	printf("emp_age %d\n",employee.emp_age);
	 	
	 	printf("-------------------------------");
	 	

	 
}
