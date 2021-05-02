/*When the sum of the factorial of a number’s individual digits 
are equal to the number itself, then that number is called a strong number.

Example: 145 since 1! + 4! + 5! = 1 + 24 + 120 = 145.*/
#include<stdio.h>
void main(void)
{
    int factorial = 1,num,i,j,rmndr,result=0,temp = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);

    temp = num;

    if(num == 0)
    {
        printf("Value Canot be Found");   
    }
    if(num < 0)
    {
        printf("Value Canot be Found \r\n");
        printf("Value should be greater then zero or can be Zero \r\n");   
    }
    else if(num > 0)
    {
        while(num != 0)
        {
            rmndr = num%10;
           for(i=1;i<=rmndr;i++)
                {
                    factorial = factorial*i;
                }
            result = result + factorial;
            factorial = 1;
            num = num/10;
        }
       if(temp == result)
            printf("Value is a Strong Number");
        else
            printf("Value is not a Strong Number");
            
        
    }
}