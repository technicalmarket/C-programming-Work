#include <stdio.h>

void main(void)
{
	int num = 0,count = 0,i,j,myarray[200],temp;
	printf("Enter the Num of element to be entered in array :");
	scanf("%d",&count);
	temp = count;
	i = 0;
	printf("Enter the element on by one:\r\n");
	while(temp != 0)
	{
		scanf("%d",&myarray[i++]);
		temp--;
	}
	
	for(i=0; i< count; i++)
		{
			for(j=i+1; j<count; j++)
				{
					if (myarray[i] > myarray[j])
						{
							temp = myarray[i];
							myarray[i] = myarray[j];
							myarray[j] = temp;
						}
				}	
		}
		
	temp = count;
	i = 0;
	printf("Sorted array element on by one\r\n");
	while(temp != 0)
	{
		printf("%d\r\n",myarray[i++]);
		temp--;
	}
	
	printf("Element to be entered in the array: ");
	scanf("%d",&num);
	myarray[count] = num;
	count = count+1;
	
	for(i=0; i< count; i++)
		{
			for(j=i+1; j<count; j++)
				{
					if (myarray[i] > myarray[j])
						{
							temp = myarray[i];
							myarray[i] = myarray[j];
							myarray[j] = temp;
						}
				}	
		}
		
	temp = count;
	i = 0;
	printf("Sorted array element on by one\r\n");
	while(temp != 0)
	{
		printf("%d\r\n",myarray[i++]);
		temp--;
	}
}

