#include<stdio.h>
void main(void)
{
    int num1,num2,num3,Sum,avg;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    printf("Enter the Third Number: ");
    scanf("%d",&num3);
    
    Sum = num1+num2+num3;

    avg = (num1+num2+num3)/3;

    printf("Sum is : %d",Sum);
    printf("Average is : %d",avg);
}