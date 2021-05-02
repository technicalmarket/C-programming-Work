#include<stdio.h>
/*A number is considered as perfect number when it satisfies the below conditions.

It should be a positive number
When the sum of it’s divisors (excluding that number) are equal to that number
Example for perfect numbers:

6, 28, 496, 8128

Description:

1 + 2 + 3 = 6


1 + 2 + 4 + 7 + 14 = 28*/
void main(void)
{
int number, sum=0, i=1;
 
     printf("Please enter a number to check perfect number\n");
 
     scanf("%d",&number);
 
 
 
     while(i<number)
 
     {
 
           if(number%i==0)
 
           {
 
               sum=sum+i;
 
           }
 
           i++;
 
     }
 
      if(sum==number)
 
           printf("\nEntered number %d is a perfect number",i);
 
     else
 
          printf("\nEntered number %d is not a perfect number",i);
}
