/*First two numbers of the fibonacci series is 0 and 1. From 3rd number onwards, 
the series will be the sum of previous 2 numbers.

Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, etc*/
#include<stdio.h>
void main(void)
{
    int num =0,j,limit,f1=0,f2=1,count = 2;
    printf("Please Enter the limit for Fibonnaci Series: ");
    scanf("%d",&limit);

    if(limit <= 1)
    {
        printf("Fibonnaci series cannot be calculated till value is greater then 2");
    }
    else 
    {
        printf("Fibonnaci series is : 0,1,");
        while(count< limit)
        {
            num = f1+f2;
            printf("%d,",num);
            f1=f2;
            f2=num;
            count++;
        }
        
    }

}