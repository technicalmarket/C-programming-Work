#include <stdio.h>
 
void main(void)
 
{
 
     int num, sum = 0, count, i;
 
     printf("Please enter how many numbers you want to add\n");
 
     scanf("%d", &count);
 
     printf("Please enter %d numbers one by one\n",count);
     
     while(count!=0)
     {
     	scanf("%d",&num);
     	sum = sum + num;
     	count--;
	 }
	 printf("Your Sum is : %d",sum);
}
