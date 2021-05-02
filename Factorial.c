/*Factorial is denoted by the symbol ‘!’. For example, factorial of a number 4 is denoted as 4!. 
Factorial of a number is defined as the product of
 “the number and all integers less than that number except zero and negative integers”.
Natural numbers ( non-negative integers ) which are greater than zero are used for factorial concept.
Factorial Example:

Zero factorial (0!) = 1
one factorial (1!) = 1
Two factorial (2!) = 2*1 = 2
Three factorial (3!) = 3*2*1 = 6
Four factorial (4!) = 4*3*2*1 = 24
Five factorial (5!) = 5*4*3*2*1 = 120
etc…

The common mathematical formula for finding factorial of the number ‘n’ is given below.

n! = n ( n – 1)( n – 2)( n – 3) …… (1)*/

#include<stdio.h>
void main(void)
{
    int factorial = 1,num,i,j;
    printf("Enter the Number : ");
    scanf("%d",&num);
    if(num == 0)
    {
        printf("Factorial Value : 1");   
    }
    if(num < 0)
    {
        printf("Factorial Value cannot be found \r\n");
        printf("Value should be greater then zero or can be Zero \r\n");   
    }
    else if(num > 0)
    {
        for(i=1;i<=num;i++)
        {
            factorial = factorial*i;
        }
        printf("Factorial Value : %d",factorial);
        
    }
}