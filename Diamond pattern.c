#include <stdio.h>

void main (void)
{
	int i,j,count,num,half,prev;
	printf("No of lines required in the diamond");
	scanf("%d",&count);
	
	half = count/2;
	
	for(i=1;i<=half;i++)
	{
			for(j=0;j<i;j++)
			{
				printf("*");	
			}				
		printf("\r\n");	
	}
	for(;i>=0;i--)
	{
			for(j=0;j<i;j++)
			{
				printf("*");	
			}			
		printf("\r\n");
	}
}
