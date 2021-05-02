#include <stdio.h>

void main(void)
{
	int num = 0,count = 0,i,j,myarray[200],temp,flag=0,position=0;
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
	printf("Sorted array element: \r\n");
	while(temp != 0)
	{
		printf("%d\r\n",myarray[i++]);
		temp--;
	}
	
	temp = count;
	i = 0;
	printf("Element to be deleted from array : ");
	scanf("%d",&num);
	for(i=0;i<count;i++)
	{
		if(num == myarray[i])
		{
			flag = 1;
			position = i;
			break;
		}
	}
	
	if(flag == 1)
	{
		printf("Element found at position %d : \r\n",(position+1));
		
		for(j=position;j<count;j++)
		{
			myarray[j] = myarray[j+1];
		}
		
		count = count-1;
		
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
		while(temp != 0)
			{
				printf("%d\r\n",myarray[i++]);
				temp--;
			}
	}
	else 
		printf("Element is not in this array\r\n");
}
