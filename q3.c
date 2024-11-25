#include<stdio.h>
#include<conio.h>

void main()
{
    int i,j,r,c;
    printf("enter number of rows : ");
    scanf("%d ",&r);
    printf("enter number of colums");
    scanf("%d",&c);
    
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nenter element:");
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nOriginal array is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\n",a[i][j]);
        }
        printf("\n");

    }
    printf("\ntranspose array is :\n");
    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\n",a[j][i]);
        }
        printf("\n");

    }
}