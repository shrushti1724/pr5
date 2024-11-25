#include<stdio.h>

void main()
{
	int i,j,r,c;
	printf("Enter the number of row:");
	scanf("%d",&r);
	printf("Enter the number of colum:");
	scanf("%d",&c);
	
	int array[r][c];
	printf("Enter the elements of 2d array:%d\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter elements array[%d][%d]\n",i,j);
		}
		int largest =array[r][c];
		for(i=0;i<r;i++)
		{
			for(j=0;j<r;j++)
			{
				if(array[i][j>largest])
				{
					largest=array[i][j];
				}
			}
			printf("\n");
		}
	}
	
}