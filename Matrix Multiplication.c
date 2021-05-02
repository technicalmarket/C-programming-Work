#include <stdio.h>


void main(void)
{
	int mat1[10][10],mat2[10][10],result[10][10];
	int C1size=0,C2size=0,R1size=0,R2size=0,i,j,k,sum = 0,temp,factor;
	
	printf("Please enter the Column size of the first matrix : ");
	scanf("%d",&C1size);
	
	printf("Please enter the Row size of the first matrix : ");
	scanf("%d",&R1size);
	
	printf("Enter the element in the first matrix \r\n");
	
	for(i=0;i<R1size;i++)
	{
		printf("Enter the elements one by one in the %d row :",i+1);
		for(j=0;j<C1size;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	
	printf("Please enter the Column size of the second matrix : ");
	scanf("%d",&C2size);
	
	printf("Please enter the Row size of the second matrix : ");
	scanf("%d",&R2size);
	
	printf("Enter the element in the Second matrix \r\n");
	
	for(i=0;i<R2size;i++)
	{
		printf("Enter the elements one by one in the %d row :",i+1);
		for(j=0;j<C2size;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	
	printf("Entered First Matrix\r\n");
	for(i=0;i<R1size;i++)
	{
	
		for(j=0;j<C1size;j++)
		{
			printf("%d\t",mat1[i][j]);
		}
		printf("\r\n");
	}
	printf("Entered Second Matrix\r\n");
	for(i=0;i<R2size;i++)
	{
	
		for(j=0;j<C2size;j++)
		{
			printf("%d\t",mat2[i][j]);
		}
		printf("\r\n");
	}
	
	temp = R1size;
	if(R1size != C2size)
		printf("These matrix cannot be multiplied \r As the column Size of first Matrix\r and row"
				"size of the second matrix does not matched ");
	else
	{
		if(C1size == R2size)
			factor = R2size;
		else if(C1size < R2size)		
			factor = C1size;
		else if(C1size > R2size)		
			factor = R2size;
			
			
		for(i=0;i<temp;i++)
		{
			for(j=0;j<temp;j++)
			{
				for(k=0;k<factor;k++)
				{
					sum = sum + (mat1[i][k] * mat2[k][j]);
				}
			result[i][j] = sum;
			sum = 0;
			}
		}
	}

	printf("Resultant Matrix : \r\n");
	for(i=0;i<temp;i++)
	{
	
		for(j=0;j<temp;j++)
		{
			printf("%d\t",result[i][j]);
		}
		printf("\r\n");
	}
}
