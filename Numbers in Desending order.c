#include <stdio.h>
void main(void)
{
	int num[5]={5,2,6,1,3},count=5,i,j,k,l,temp;
	
/*	printf("Please enter No of Entries :");
	scanf("%d",&count);
	
	printf("Enter Values One by One :");
	for(i=0;i<count;i++)
	{
	//	printf("i = %d",i);
		scanf("%d",&num[i]);
	}*/
		
		for(i=0;i<count;i++)
		{
			for(j=i+1;j<count;j++)
			{
				/*printf("NUM[i] = %d\r\n",num[i]);
				printf("NUM[j] = %d\r\n",num[j]);*/
				if(num[i]<num[j])
				{
					temp = num[j];
					num[j] = num[i];
					num[i] = temp;
					/*for(k=0;k<count;k++)
						printf("%d,",num[k]);*/
				}
				/*for(l=0;l<count;l++)
						printf("%d,",num[l]);*/
			}
		}
	printf("Values in Desending Order : ");
	for(i=0;i<count;i++)
		printf("%d,",num[i]);
	getch();
}
