#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,rows,cols,rowssum=0,colssum=0;
    
	printf("enter number of rows");
	scanf("%d",&rows);
	printf("enter number of columns");
	scanf("%d",&cols);
	
	printf("enter element 2darray:%d\n");
	int arr[rows][cols];
	for( i=0;i<rows;i++)
	{
		for( j=0;j<cols;j++)
		{
			printf("enter element arr[%d][%d]",i,j);
			scanf("%d",arr[i][j]);
		
		}
		printf("\n");
	}
	printf("\n");
	printf("enter the rows number of the sum(0to%d):\n",rows-1);
	scanf("%d",&rows);
	printf("enter the columns number of the sum(0to%d):\n",cols-1);
	scanf("%d",&cols);
	printf("\n");
	for( j=0;j<cols;j++)
	{
	rowssum+=arr[i][rows];
	}
	printf("\n");
	
	for( i=0;i<rows;i++)
	{
	colssum+=arr[i][cols];
	}
	printf("\n");
	printf("\n the 2d array is :\n");
	printf("\n");
	for(  i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("\n sum of element rows%d:%d\n",rows,rowssum); 
    printf("\n sum of element columns%d:%d\n",cols,colssum); 
    printf("\n");
    
    

	
	
}