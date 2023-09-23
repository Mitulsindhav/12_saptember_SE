#include<stdio.h>
main()
{
	int a[2][3]={10,20,30,40,50,60};
	int b[2][3]={1,2,3,4,5,6};
	int c[2][3];
	int row,col;
	printf("---first matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	printf("---second matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	printf(" ---Addition matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]+b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	printf(" ---Subtrection matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]-b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	
	printf(" ---Multiplication matrix---\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col]*b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}

	
}
