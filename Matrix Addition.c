#include <stdio.h>


void main(void)
{
	int mat1[10][10],mat2[10][10],result[10][10];
	int size=0,i,j;
	
	printf("Please enter the size of the matrix : ");
	scanf("%d",&size);
	
	printf("Enter the element in the first matrix \r\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter the elementsone by one in the %d row :",i+1);
		for(j=0;j<size;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Enter the element in the Second matrix \r\n");
	
	for(i=0;i<size;i++)
	{
		printf("Enter the elementsone by one in the %d row :",i+1);
		for(j=0;j<size;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
	for(i=0;i<size;i++)
	{
	
		for(j=0;j<size;j++)
		{
			result[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	
	for(i=0;i<size;i++)
	{
	
		for(j=0;j<size;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\r\n");
	}
}
