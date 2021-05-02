#include<stdio.h>
void main(void)
{
    int num1,num2,num3,LargestNumber;
    printf("Enter the First Number: ");
    scanf("%d",&num1);
    printf("Enter the Second Number: ");
    scanf("%d",&num2);
    printf("Enter the Third Number: ");
    scanf("%d",&num3);
    
    LargestNumber = num1;

    if(num1 < num2)      LargestNumber = num2;
    if(num1 < num3) LargestNumber = num3;
    if(num2 < num3) LargestNumber = num3;
    else   LargestNumber = num2;

    printf("Largest Number is : %d",LargestNumber);
    
}
